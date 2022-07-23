#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    string word;
    vector<string> text;
    while(cin >> word) {
        text.push_back(word);
    }
    for(auto &w : text)
        for(auto &c : w)
            c = toupper(c);
    for(auto w : text)
        cout << w << endl;
    return 0;
}