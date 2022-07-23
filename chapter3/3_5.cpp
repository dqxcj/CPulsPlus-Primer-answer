#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string s, ss;
    while(cin >> s) {
        ss = ss + " " + s;
    }
    cout << ss << endl;
    return 0;
}