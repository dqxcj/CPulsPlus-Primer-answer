#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    string s;
    deque<string> deque_str;
    while(cin >> s) {
        deque_str.push_back(s);
    }
    for(auto i = deque_str.cbegin(); i != deque_str.cend(); ++i) {
        cout << *i << endl;
    }
    return 0;
}