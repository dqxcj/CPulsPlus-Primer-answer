#include <iostream>
#include <list>
#include <map>
using namespace std;

int main() {
    list<int> lst = {1, 2, 3, 4, 5, 6};
    map<int, string> map;
    for(auto i : lst) {
        string s;
        cin >> s;
        map[i] = s;
    }
    for(auto &p : map) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}