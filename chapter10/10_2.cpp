#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<string> ls;
    string s;
    while(cin >> s) {
        ls.push_back(s);
    }
    cout << "hello������" << count(ls.begin(), ls.end(), "hello") << "��" << endl;
    return 0;
}