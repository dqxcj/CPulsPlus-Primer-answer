#include <iostream>
#include <set>
#include "Sales_data.h"
using namespace std;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn < rhs.isbn;
}

int main() {
    typedef bool (*ptrF)(const Sales_data &lhs, const Sales_data &rhs);
    multiset<Sales_data, ptrF> bookstore(&compareIsbn);
    Sales_data sd;
    while(cin >> sd.isbn) {
        bookstore.insert(sd);
    }
    for(auto &s : bookstore) {
        cout << s.isbn << " ";
    }
    return 0;
}
