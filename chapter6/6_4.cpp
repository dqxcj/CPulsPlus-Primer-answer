#include <iostream>
using namespace std;

//���ɽ׳�
void JC(int n) {
    int  sum = n;
    cout << n--;
    while(n > 0){
        cout << " * " << n; 
        sum *= n--;
    }
    cout << endl << "�׳�Ϊ��" << sum<< endl;
}