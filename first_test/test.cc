#include<iostream>
#include"contacts.pb.h"

int main()
{
    std::string str;

    contacts::PeopoInfo people;
    people.set_name("李四");
    people.set_age(20);
    if(!people.SerializeToString(&str)){
        std::cout<<"序列化失败!"<<std::endl;
        return -1;
    }
    std::cout<<"序列化成功！"<<std::endl;
    std::cout<<str<<std::endl;

    contacts::PeopoInfo secpeo;
    if(!secpeo.ParseFromString(str)){
        std::cout<<"反序列化失败!"<<std::endl;
        return -2;
    }
    std::cout<<"反序列化成功！"<<std::endl;
    std::cout<<"姓名："<<secpeo.name()<<std::endl;
    std::cout<<"年龄："<<secpeo.age()<<std::endl;


    return 0;
}