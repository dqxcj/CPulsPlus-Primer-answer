#include <iostream>
#include <string>



//***********��***********

class Sales_data {
friend Sales_data add(Sales_data &sd1, Sales_data &sd2);
friend std::istream &read(std::istream &is, Sales_data &sd);
friend std::ostream &print(std::ostream &os, const Sales_data &sd);
public:
    //���캯��
    Sales_data(const std::string &s, unsigned u, double d) : book_num(s), units_sold(u), revenue(d) {std::cout << "��������" << std::endl;}
    Sales_data(): Sales_data(" ", 0, 0) {std::cout << "default" << std::endl;}
    Sales_data(const std::string &s): Sales_data(s, 0, 0) {std::cout << "һ������" << std::endl;}
    Sales_data(std::istream &is);

    //��Ա��������
    Sales_data& combine(const Sales_data &rhs);
    std::string isbn() const;
private:
    //��Ա��������
    double AvgPrice() const;

    //���ݳ�Ա
    std::string book_num;  //ISBN
    unsigned units_sold = 0;  //��������
    double revenue = 0.0;  //��������
};

//***********�ǳ�Ա��������***********

Sales_data add(Sales_data &sd1, Sales_data &sd2);
std::istream &read(std::istream &is, Sales_data &sd);
std::ostream &print(std::ostream &os, const Sales_data &sd);

//***********���캯������***********
Sales_data::Sales_data(std::istream &is) : Sales_data() { 
    read(is, *this); 
    std::cout << "�Լ�����" << std::endl;
}

//***********��Ա��������***********
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

//ƽ���ۼ�
inline double Sales_data::AvgPrice() const {
    if(units_sold == 0)
        return 0;
    else
        return revenue / units_sold;
}

//***********�ǳ�Ա��������***********
//�ӷ�
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


int main() {
    Sales_data a, b("bbbbb"), c("ccccc", 1, 1), d(std::cin);
    return 0;
}
