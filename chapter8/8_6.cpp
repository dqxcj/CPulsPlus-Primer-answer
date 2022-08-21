#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Sales_data {
    std::string bookNo;  //ISBN
    unsigned units_sold = 0;  //销售数量
    double price = 0.0;  //单价 or 平均售价
    double revenue = 0.0;  //销售收入
};

int main(int argc, char *argv[]) {
    Sales_data total;
    ifstream infile(argv[1]);
    ofstream outfile(argv[2], ofstream::app);
    if(infile >> total.bookNo >> total.units_sold >> total.price) {
        total.revenue = total.price * total.units_sold;
        Sales_data trans;
        while(infile >> trans.bookNo >> trans.units_sold >> trans.price) {
            trans.revenue = trans.price * trans.units_sold;
            if(total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
                total.price = total.revenue / total.units_sold;
            } else {
                outfile << total.bookNo << " " << total.units_sold << " "
                     << total.revenue << " " << total.price << endl;
                total = trans;
            }
        }
        outfile << total.bookNo << " " << total.units_sold << " "
             << total.revenue << " " << total.price << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}