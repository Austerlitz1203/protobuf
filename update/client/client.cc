#include<iostream>
#include<fstream>
#include<contacts.pb.h>
#include<google/protobuf/unknown_field_set.h>

using namespace std;
using namespace contacts;
using namespace google::protobuf;

    void
    PrintContacts(contacts::Contacts &cons)
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
            cout<<"联系人电话"<< j+1 <<":"<<pho.phone_number()<<endl;
        }

        const Reflection* reflection = PeopleInfo::GetReflection();
        const UnknownFieldSet&  set = reflection->GetUnknownFields(con);
        int n=set.field_count();
        for(int i=0;i<n;i++){
            const UnknownField &  unknowfield = set.field(i);
            cout<<"未知字段"<<i+1<<":"
                <<"字段编号："<<unknowfield.number();
            switch (unknowfield.type())
            {
            case UnknownField::Type::TYPE_VARINT:
                cout<< "  值："<<unknowfield.varint()<<endl;
                break;
            case UnknownField::Type::TYPE_FIXED32:
                cout << "  值：" << unknowfield.fixed32() << endl;
                break;
            case UnknownField::Type::TYPE_FIXED64:
                cout << "  值：" << unknowfield.fixed64() << endl;
                break;
            case UnknownField::Type::TYPE_LENGTH_DELIMITED:
                cout << "  值：" << unknowfield.length_delimited() << endl;
                break;
            default:
                break;
            }
        }


    }
}


int main()
{
    // 读取联系人信息
    contacts::Contacts contacts;
    fstream input("../contacts.bin",ios::binary | ios::in);
    if(!contacts.ParseFromIstream(&input)){
        cerr<<"parse from file error"<<endl;
        input.close();
        return -1;
    }

    PrintContacts(contacts);

    return 0;
}