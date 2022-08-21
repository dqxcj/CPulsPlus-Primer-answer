#include <iostream>
using namespace std;

istream &input(istream &is) {
    char c;
    while(is >> c, !is.eof()) {
        cout << c << " ";
    }
    cout << '\n' << is.good() << endl;
    is.clear();
    cout << is.good() << endl;
    return is;
}

int main() {
    input(cin);
    cout << cin.good() << endl;
    return 0;
}