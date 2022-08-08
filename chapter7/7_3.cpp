#include <iostream>
#include "7_2.h"
using namespace std;

int main() {
    Sales_data total;
    double tprice;
    if(cin >> total.bookNo >> total.units_sold >> tprice) {
        total.revenue = tprice * total.units_sold;
        Sales_data trans;
        double trprice;
        while(cin >> trans.bookNo >> trans.units_sold >> trprice) {
            trans.revenue = trprice * trans.units_sold;
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
                tprice = total.revenue / total.units_sold;
            } else {
                cout << total.bookNo << " " << total.units_sold << " "
                     << total.revenue << " " << tprice << endl;
                total = trans;
                tprice = total.revenue / total.units_sold;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " "
             << total.revenue << " " << tprice << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}