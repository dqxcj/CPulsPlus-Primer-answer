#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compareString(const string & s1) {
    return s1.size() >= 5;
}

int main() {
    vector<string> vs;
    string s;
    while(cin >> s) {
        vs.push_back(s);
    }
    auto tend = partition(vs.begin(), vs.end(), compareString);
    for(auto i = vs.cbegin(); i != tend; ++i) {
        cout << *i << " ";
    }
    return 0;
}