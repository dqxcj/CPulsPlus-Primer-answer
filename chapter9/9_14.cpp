#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    list<const char*> list_charArr = {"hello", "world", "hh"};
    vector<string> vec_str;
    vec_str.assign(list_charArr.cbegin(), list_charArr.cend());
    for(auto &i : vec_str) {
        cout << i << endl;
    }
    return 0;
}