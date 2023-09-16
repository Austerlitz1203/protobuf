#include<iostream>
#include<fstream>
#include<contacts.pb.h>

using namespace std;
using namespace contacts;

void PrintContacts(contacts::Contacts &cons)
{
    int n=cons.contacts_size();
    for(int i=0;i<n;i++)
    {
        cout<<"---------打印第"<< i+1 <<"个人的信息----------"<<endl;
        const contacts::PeopleInfo & con=cons.contacts(i);
        cout<<"联系人姓名："<<con.name()<<endl;
        cout<<"联系人年龄："<<con.age()<<endl;
        int m = con.phone_size();
        for(int j=0;j<m;j++)
        {
            const ::contacts::Phone &pho = con.phone(j);
            cout<<"联系人电话"<< j+1 <<":"<<pho.phone_number();
            cout<<"  ("<<pho.PhoneType_Name(pho.type())<<")"<<endl;
        }

        if(con.has_addr() && con.addr().Is<contacts::Address>()){
            contacts::Address addr;
            con.addr().UnpackTo(&addr);
            if(!addr.home_addr().empty()){
                cout<<"家庭地址："<<addr.home_addr()<<endl;
            }
            if(!addr.unit_addr().empty()){
                cout<<"单位地址："<<addr.unit_addr()<<endl;
            }
        }

        switch (con.other_contact_case()){
            case contacts::PeopleInfo::OtherContactCase::kQq:
                cout<<"qq号："<<con.qq()<<endl;
                break;
            case contacts::PeopleInfo::OtherContactCase::kWechat:
                cout<<"微信号："<<con.wechat()<<endl;
                break;
            case contacts::PeopleInfo::OtherContactCase::OTHER_CONTACT_NOT_SET:
                break;
        }

        if(con.remark_size()){
            cout<<"备注信息："<<endl;
            for(auto it = con.remark().begin() ; it!=con.remark().end() ;it++){
                cout<<"   "<<it->first<<":"<<it->second<<endl;
            }
        }
    }
}


int main()
{
    // 读取联系人信息
    contacts::Contacts contacts;
    fstream input("contacts.bin",ios::binary | ios::in);
    if(!contacts.ParseFromIstream(&input)){
        cerr<<"parse from file error"<<endl;
        input.close();
        return -1;
    }

    PrintContacts(contacts);

    return 0;
}