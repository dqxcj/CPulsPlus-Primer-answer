#include <iostream>
using namespace std;

//Éú³É½×³Ë
void JC(int n) {
    int  sum = n;
    cout << n--;
    while(n > 0){
        cout << " * " << n; 
        sum *= n--;
    }
    cout << endl << "½×³ËÎª£º" << sum<< endl;
}