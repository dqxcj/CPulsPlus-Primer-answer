#ifndef _7_4_H
#define _7_4_H

#include <iostream>
#include <string>

struct Person {
    //成员函数
    std::string PersonName() const {return name;};
    std::string PersonAddress() const {return address;};

    //数据成员
    std::string name;
    std::string address;
};


//非成员函数定义
//cin
std::istream& read(std::istream &is, Person &p) {
    is >> p.name >> p.address;
    return is;
}

//cout
std::ostream& print(std::ostream &os, const Person &p) {
    os << p.PersonName() << p.PersonAddress();
    return os;
}


#endif