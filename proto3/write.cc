#include <iostream>
#include<fstream>
#include "contacts.pb.h"

using namespace std;
using namespace contacts;


void AddPeopleInfo(PeopleInfo *people_info_ptr)
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

    for(int i=1;;i++){
        cout<<"请输入联系人电话号码"<<i<<"(输入单行回车表示结束)：";
        string number;
        getline(cin, number);

        if(number.empty())
            break;

        Phone *phone = people_info_ptr->add_phone();
        phone->set_phone_number(number);
    }

    cout<<"添加联系人成功！"<<endl;

}

int main()
{
    Contacts contacts;
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