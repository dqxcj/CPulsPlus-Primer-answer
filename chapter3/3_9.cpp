#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main() {
    string s;
    cin >> s;
    for(auto &c : s){
        if(ispunct(c))
            c = '\0';
    }
    cout << s;
    return 0;
}