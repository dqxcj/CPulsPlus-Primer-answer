#include <iostream>
#include "chapter6.h"
#include "6_4.cpp"
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        try {
            if (n <= 0)
                throw runtime_error("请输入大于0的整数");
            JC(n);
        }
        catch (runtime_error e) {
            cout << e.what() << "\n是否再次输入？(y/n) ：";
            char c;
            cin >> c;
            if (c != 'y' && c != 'Y')
                break;
        }
    }
    return 0;
}