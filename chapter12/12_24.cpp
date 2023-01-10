#include <iostream>
#include <string>
using namespace std;

int main() {
    char *cptr = new char[10](), c;
    int i = 0;
    cin >> noskipws;
    while(cin >> c) {
        if(c == ' ') {
            break;
        }
        cptr[i++] = c;
        if(i == 10) {
            cout << "string too long!" << endl;
            break;
        }
    }
    cin >> skipws;
    cout << cptr << endl;
    delete []cptr;
    return 0;
}