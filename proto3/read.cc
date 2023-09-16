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
        cout<<endl;
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