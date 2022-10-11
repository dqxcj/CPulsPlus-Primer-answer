#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    unordered_map<string, int> umap;
    unordered_set<string> uset = {"a", "the", "an", "of"};
    string s;
    while(cin >> s) {
        if(uset.find(s) == uset.end()) {
            auto re = umap.insert({s, 1});
            if(!re.second) {
                ++re.first -> second;
            }
        }
    }
    for(auto &p : umap) {
        cout << p.first << "³öÏÖ" << p.second << "´Î" << endl;
    }
    return 0;
}