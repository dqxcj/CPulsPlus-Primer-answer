#include <iostream>
#include <sstream>
using namespace std;

istream &input(istream &is) {
    string c;
    while(is >> c, !is.fail()) {
        cout << c << " ";
    }
    cout << endl;
    cout << is.good() << endl;
    is.clear();
    cout << is.good() << endl;
    return is;
}

int main() {
    istringstream inString("2022 08 21 76 88");
    input(inString);
    cout << inString.good() << endl;
    return 0;
}