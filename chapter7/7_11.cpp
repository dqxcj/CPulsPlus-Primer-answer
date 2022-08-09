#include <iostream>
#include "7_2.h"
using namespace std;

int main() {
    Sales_data sd1, sd2("202012656"), sd3("202012656", 5, 15.0), sd4(cin);
    print(cout, sd1); cout << endl;
    print(cout, sd2); cout << endl;
    print(cout, sd3); cout << endl;
    print(cout, sd4); cout << endl;
    return 0;
}