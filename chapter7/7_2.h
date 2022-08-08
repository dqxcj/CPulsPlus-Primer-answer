#ifndef _7_2_H
#define _7_2_H

#include <iostream>
#include <string>

struct Sales_data {
    //成员函数声明
    Sales_data& combine(const Sales_data &rhs);
    std::string isbn();

    //数据成员
    std::string bookNo;  //ISBN
    unsigned units_sold = 0;  //销售数量
    double revenue = 0.0;  //销售收入
};

//成员函数定义
//+=
Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

//isbn
std::string Sales_data::isbn() {
    return bookNo;
}

//非成员函数定义
//加法
Sales_data add(Sales_data &sd1, Sales_data &sd2) {
    Sales_data sd3 = sd1;
    sd3.combine(sd2);
    return sd3;
}

//cin
std::istream& read(std::istream &is, Sales_data &sd) {
    double price;
    is >> sd.bookNo >> sd.units_sold >> price;
    sd.revenue = sd.units_sold * price;
    return is;
}


//cout
std::ostream& print(std::ostream &os, const Sales_data &sd) {
    os << sd.bookNo << " " << sd.units_sold << " " 
       << sd.revenue << " " << sd.revenue / sd.units_sold;
       return os;
}



#endif