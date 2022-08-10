#ifndef _7_2_H
#define _7_2_H

#include <iostream>
#include <string>



//***********类***********

class Sales_data {
friend Sales_data add(Sales_data &sd1, Sales_data &sd2);
friend std::istream &read(std::istream &is, Sales_data &sd);
friend std::ostream &print(std::ostream &os, const Sales_data &sd);
public:
    //构造函数
    Sales_data() = default;
    Sales_data(const std::string &s): book_num(s) {}
    Sales_data(const std::string &s, unsigned u, double d): book_num(s), units_sold(u), revenue(d) {}
    Sales_data(std::istream &is);

    //成员函数声明
    Sales_data& combine(const Sales_data &rhs);
    std::string isbn() const;
private:
    //成员函数声明
    double AvgPrice() const;

    //数据成员
    std::string book_num;  //ISBN
    unsigned units_sold = 0;  //销售数量
    double revenue = 0.0;  //销售收入
};

//***********非成员函数声明***********

Sales_data add(Sales_data &sd1, Sales_data &sd2);
std::istream &read(std::istream &is, Sales_data &sd);
std::ostream &print(std::ostream &os, const Sales_data &sd);

//***********构造函数定义***********
Sales_data::Sales_data(std::istream &is) { 
    read(is, *this); 
}

//***********成员函数定义***********
//+=
Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

//isbn
std::string Sales_data::isbn() const {
    return book_num;
}

//平均售价
inline double Sales_data::AvgPrice() const {
    if(units_sold == 0)
        return 0;
    else
        return revenue / units_sold;
}

//***********非成员函数定义***********
//加法
Sales_data add(Sales_data &sd1, Sales_data &sd2) {
    Sales_data sd3 = sd1;
    sd3.combine(sd2);
    return sd3;
}

//cin
std::istream& read(std::istream &is, Sales_data &sd) {
    double price;
    is >> sd.book_num >> sd.units_sold >> price;
    sd.revenue = sd.units_sold * price;
    return is;
}


//cout
std::ostream& print(std::ostream &os, const Sales_data &sd) {
    os << sd.book_num << " " << sd.units_sold << " " 
       << sd.revenue << " " << sd.AvgPrice();
       return os;
}



#endif