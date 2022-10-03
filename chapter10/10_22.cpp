#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, int size) {
    return s.size() <= size;
}

int main() {
    vector<string> vs;
    string s;
    while(cin >> s)
        vs.push_back(s);
    int size = 6;
    auto a = count_if(vs.begin(), vs.end(), bind(check_size, _1, size));
    cout << a << endl;
    return 0;
}