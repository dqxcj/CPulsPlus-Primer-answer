#ifndef _7_4_H
#define _7_4_H

#include <iostream>
#include <string>

struct Person {
friend std::istream& read(std::istream &is, Person &p);
friend std::ostream& print(std::ostream &os, const Person &p);
public:
    //构造函数
    Person() = default;
    Person(const std::string &s1, const std::string &s2): name(s1), address(s2) {}
    Person(std::istream &is);

    //成员函数
    std::string PersonName() const {return name;};
    std::string PersonAddress() const {return address;};
private:

    //数据成员
    std::string name;
    std::string address;
};

//**********非成员函数声明**********
std::istream& read(std::istream &is, Person &p);
std::ostream& print(std::ostream &os, const Person &p);



//**********构造函数定义**********
Person::Person(std::istream &is) {
    read(is, *this);
}



//**********非成员函数定义**********
// cin
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