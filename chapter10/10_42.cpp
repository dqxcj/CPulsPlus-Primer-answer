#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

void ElimDups(list<string> &words) {
    words.sort();
    words.unique();
}

int main() {
    list<string> ls;
    string s;
    while(cin >> s) {
        ls.push_back(s);
    }
    ElimDups(ls);
    ostream_iterator<string> os(cout, " ");
    copy(ls.cbegin(), ls.cend(), os);
    return 0;
}