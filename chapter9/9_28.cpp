#include <iostream>
#include <string>
#include <forward_list>
using namespace std;

void flistInsert(forward_list<string> &flist, const string &s1, const string &s2) {
    auto pre = flist.before_begin();
    for(auto curr = flist.begin(); curr != flist.end(); ++curr) {
        if(*curr == s1) {
            flist.insert_after(curr, s2);
            return ;
        }
        ++pre;
    }
    flist.insert_after(pre, s2);
}

int main() {
    forward_list<string> flist = {"happy", "ending", "free", "sky", "file"};
    flistInsert(flist, "free", "hello");
    for(auto &i : flist) {
        cout << i << " ";
    }
    cout << endl;
    flistInsert(flist, "list", "world");
    for(auto &i : flist) {
        cout << i << " ";
    }
    return 0;
}