#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void ProcessString(string &s) {
    if (*(s.end() - 1) == ',' || *(s.end() - 1) == '.')
        s.erase(s.end() - 1);
    for(auto &c : s) {
        if(c >= 'A' && c <= 'Z')
            c += ('a' - 'A');
    }
}

int main() {
    unordered_map<string, int> umap;
    unordered_set<string> uset = {"a", "the", "an", "of"};
    string s;
    while(cin >> s) {
        ProcessString(s);
        if(uset.find(s) == uset.end()) {
            ++umap[s];
        }
    }
    for(auto &p : umap) {
        cout << p.first << "³öÏÖ" << p.second << "´Î" << endl;
    }
    return 0;
}