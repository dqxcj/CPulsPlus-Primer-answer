#include <iostream>
#include <initializer_list>
using namespace std;

int main() {
    int Sum(initializer_list<int> il);
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    cout << Sum({a}) << " "
         << Sum({a, b}) << " "
         << Sum({a, b, c}) << " "
         << Sum({a, b, c, d}) << " "
         << Sum({a, b, c, d, e}) << " "
         << endl;
    return 0;
}

int Sum(initializer_list<int> il) {
    int sum = 0;
    /*方法一
    for(auto i = il.begin(); i != il.end(); ++i) {
        sum += *i;
    } */

    //方法二
    for(const auto &i : il) {
        sum += i;
    }
    return sum;
}