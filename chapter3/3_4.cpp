#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == s2)
        cout << "string equal" <<endl;
    else{
        cout << "big string is " << (s1 > s2 ?s1:s2) << endl;
    }
    if(s1.size() == s2.size())
        cout << "size equal: " << s1.size() << endl;
    else{
        cout << "long string is " << (s1.size() > s2.size() ?s1:s2) << endl;
    }
    return 0;
}