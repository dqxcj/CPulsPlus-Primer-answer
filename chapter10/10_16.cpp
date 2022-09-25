#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void elimDups(vector<string> &vs) {
    sort(vs.begin(), vs.end());
    auto end_unique = unique(vs.begin(), vs.end());
    vs.erase(end_unique, vs.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    for_each(words.begin(), words.end(), [](const string &s)
             { cout << s << " "; });
    cout << endl;
    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2){return s1.size() < s2.size();});
    for_each(words.begin(), words.end(), [](const string &s)
             { cout << s << " "; });
    cout << endl;
    auto it = find_if(words.begin(), words.end(), [sz](const string &s){return s.size() >= sz;});
    auto count = words.end() - it;
    for_each(it, words.end(), [](const string &s){cout << s << " ";});
    cout << "¹²" << count << "¸ö" << endl;
}

int main() {
    vector<string> vs;
    string s;
    while(cin >> s) {
        vs.push_back(s);
    }
    biggies(vs, 2);
    return 0;
}