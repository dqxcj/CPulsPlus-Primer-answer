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
            cout << s << "���д�д��ĸ" << endl;
            upperToLower(s);
            cout << "����д��ĸת��ΪСд��ĸ��Ϊ" << s << endl;
        }
        else {
            cout << s << "�����д�д��ĸ" << endl;
        }
        cout << "�Ƿ����(Y/N)��";
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
            c = tolower(c);   //ע��Ҫ�ٴθ�ֵ
        }
}
