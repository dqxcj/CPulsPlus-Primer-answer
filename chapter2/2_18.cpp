#include <iostream>
using namespace std;

int main(){
    int a = 0, *ptr = &a, b = 2;
    cout << a << " " << ptr << " " << b << endl;
    *ptr = 1;
    cout << a << " " << ptr << " " << b << endl;
    ptr = &b;
    cout << a << " " << ptr << " " << b << endl;
    return 0;
}