#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<string> vs;
    string s;
    while(cin >> s) {
        vs.push_back(s);
    }
    for(auto &s : vs) {
        cout << s << " ";
    }
    cout << endl;
    sort(vs.begin(), vs.end());
    auto end_unique = unique(vs.begin(), vs.end());
    vs.erase(end_unique, vs.end());
    for(auto &s : vs) {
        cout << s << " ";
    }
    return 0;
}