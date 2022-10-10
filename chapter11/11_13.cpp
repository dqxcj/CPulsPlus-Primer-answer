#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
    string s;
    int n;
    vector<pair<string, int>> vp;
    while(cin >> s >> n) {
        //pair<string, int> p = {s, n}; //a
        //pair<string, int> p(s, n); //b
        auto p = make_pair(s, n);  //c
        vp.push_back(p);
    }
    for(auto &pa : vp) {
        cout << pa.first << " " << pa.second << endl;
    }
    return 0;
}