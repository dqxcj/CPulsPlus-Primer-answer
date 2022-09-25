#include <iostream>
#include <vector>
#include <algorithm>
#include "D:\\code\\C++_code\\C++primer\\chapter2\\Sales_data.h"
using namespace std;

int main() {
    vector<Sales_data> vsd;
    Sales_data sd;
    while(cin >> sd.isbn >> sd.sale_num >> sd.total_sold) {
        vsd.push_back(sd);
    }
    for(auto &i : vsd) {
        cout << i.isbn << " " << i.sale_num << " " << i.total_sold << endl;
    }
    cout << endl;
    sort(vsd.begin(), vsd.end(), [] (const Sales_data &sd1, const Sales_data &sd2)
         { return sd1.isbn < sd2.isbn; });
    for(auto &i : vsd) {
        cout << i.isbn << " " << i.sale_num << " " << i.total_sold << endl;
    }
    return 0;
} 