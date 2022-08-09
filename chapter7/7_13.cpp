#include <iostream>
#include "7_2.h"
using namespace std;

int main() {
    Sales_data total(cin);
    if(cin) {
        Sales_data trans;
        while(read(cin, trans)) {
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total);
                cout << endl;
                total = trans;
            }
        }
        print(cout, total);
        cout << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}