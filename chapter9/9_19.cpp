#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    string s;
    list<string> list_str;
    while(cin >> s) {
        list_str.push_back(s);
    }
    for(auto i = list_str.cbegin(); i != list_str.cend(); ++i) {
        cout << *i << endl;
    }
    return 0;
}