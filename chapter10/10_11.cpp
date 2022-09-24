#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

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
    cout << endl;
    stable_sort(vs.begin(), vs.end(), isShorter);
    for(auto &s : vs) {
        cout << s << " ";
    }
    return 0;
}