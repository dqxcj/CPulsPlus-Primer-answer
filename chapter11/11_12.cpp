#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
    string s;
    int n;
    pair<string, int> p;
    vector<pair<string, int>> vp;
    while(cin >> s >> n) {
        p.first = s;
        p.second = n;
        vp.push_back(p);
    }
    for(auto &pa : vp) {
        cout << pa.first << " " << pa.second << endl;
    }
    return 0;
}