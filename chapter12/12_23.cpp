#include <iostream>
#include <string>
using namespace std;

void charArr(const string &s1, const string &s2) {
    string s = s1 + s2;
    int size = s.size();
    char *cptr = new char[size]();
    for(int i = 0; i < size; i++) {
        cptr[i] = s[i];
    }
    for(int i = 0; i < size; i++) {
        cout << cptr[i];
    }
    cout << endl;
    delete []cptr;
}

int main() {
    charArr("hello", " world!");
    string s1 = "happy", s2 = " coding!";
    charArr(s1, s2);
    return 0;
}