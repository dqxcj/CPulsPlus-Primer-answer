#include <iostream>
#include "chapter6.h"
#include "6_4.cpp"
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        try {
            if (n <= 0)
                throw runtime_error("���������0������");
            JC(n);
        }
        catch (runtime_error e) {
            cout << e.what() << "\n�Ƿ��ٴ����룿(y/n) ��";
            char c;
            cin >> c;
            if (c != 'y' && c != 'Y')
                break;
        }
    }
    return 0;
}