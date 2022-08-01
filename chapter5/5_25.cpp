#include <iostream>
#include <stdexcept>
using namespace std;


int main() {
    int a, b;
    cout << "Please enter two number: ";
    while(cin >> a >> b){
        try {
            if (b == 0)
                throw runtime_error("除数不能为0");
            cout << a / b << endl;
            cout << "Please enter two number: ";
        } catch (runtime_error e) {
            cout << e.what() << "\nTry again? Enter y or n: ";
            char c;
            cin >> c;
            if(c != 'y' && c != 'Y')
                break;
            cout << "Please enter two number: ";
        }
    }
    return 0;
}