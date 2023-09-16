#include <iostream>
#include<fstream>
#include "contacts.pb.h"

using namespace std;
using namespace contacts;


void AddPeopleInfo(contacts::PeopleInfo *people_info_ptr)
{
    cout<<"---------请添加联系人信息---------"<<endl;
    cout<<"请输入联系人姓名：";
    string name;
    getline(cin,name);
    people_info_ptr->set_name(name);

    cout<<"请输入联系人年龄：";
    int age;
    cin>>age;
    people_info_ptr->set_age(age);
    cin.ignore(256,'\n');

    for(int i=1;;i++){
        cout<<"请输入联系人电话号码"<<i<<"(输入空行表示结束)：";
        string number;
        getline(cin, number);

        if (number.empty())
        {
            break;
        }

        cout<<"请选择此电话号码类型 （1、移动电话  2、固定电话）：";
        int type;
        cin>>type;
        cin.ignore(256,'\n');

        Phone *phone = people_info_ptr->add_phone();
        phone->set_phone_number(number);
        switch (type)
        {
        case 1:
            phone->set_type(contacts::Phone_PhoneType::Phone_PhoneType_MP);
            break;
        case 2:
            phone->set_type(contacts::Phone_PhoneType::Phone_PhoneType_TEL);
            break;
        default:
            cout<<"非法选择，使用默认值（移动电话）"<<endl;
            break;
        }

    }

    cout<<"添加联系人成功！"<<endl;

}

int main()
{
    contacts::Contacts contacts;
    // 读取本地已经存在的通讯录文件
    fstream input("contacts.bin",ios::binary | ios::in);
    if(!input){
        cout<< "contacts.bin not find,create new one!"<<endl;
    }
    else if (!contacts.ParseFromIstream(&input)){
        cerr<<"parse error"<<endl;
        input.close();
        return -1;
    }

    // 向通讯录中添加一个联系人
    AddPeopleInfo(contacts.add_contacts());

    // 向通讯录文件写入
    fstream output("contacts.bin",ios::out | ios::trunc | ios::binary);
    if(!contacts.SerializeToOstream(&output)){
        cerr<<"write error"<<endl;
        input.close();
        output.close();
        return -1;
    }

    cout<<"write success"<<endl;
    input.close();
    output.close();
    return 0;
}