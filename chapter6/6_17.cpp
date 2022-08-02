#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    bool haveUpper(const string& s);
    void upperToLower(string& s);
    string s;
    while(getline(cin, s)) {
        if(haveUpper(s)) {
            cout << s << "含有大写字母" << endl;
            upperToLower(s);
            cout << "将大写字母转换为小写字母后为" << s << endl;
        }
        else {
            cout << s << "不含有大写字母" << endl;
        }
        cout << "是否继续(Y/N)？";
        char c;
        cin >> c;
        if(c != 'Y' && c != 'y')
            break;
    }
    return 0;
}

bool haveUpper(const string& s) {
    for(auto &c : s)
        if(isupper(c))
            return true;
    return false;
}

void upperToLower(string& s) {
    for (auto &c : s)
        if (isupper(c)) {
            c = tolower(c);   //注意要再次赋值
        }
}
