#include <iostream>
using namespace std;

int main() {
    int compare(int n, const int* pn);
    int a, b;
    while(cin >> a >> b) {
        if(a != b){
            int m = compare(a, &b);
            cout << "�ϴ���Ǹ���" << m << endl;
        }
        else if(a == b)
            cout << "�������" << endl;
        cout << "�Ƿ����(Y/N)?";
        char c;
        cin >> c;
        if(c != 'Y' && c != 'y')
            break;
    }
    return 0;
}

int compare(int n, const int* pn) {
    return n > *pn ? n : *pn;
}