#include <iostream>
using namespace std;

void f(int n) {
    cout << "f(int) " << n << endl;
}

void f(int n1, int n2) {
    cout << "f(int, int) " << n1 << " " << n2 << endl;
}

void f(double d1, double d2 = 3.14) {
    cout << "f(double, double = 3.14) " << d1 << " " << d2 << endl;
}

int main () {
    //f(2.56, 42);  //具有二义性
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}