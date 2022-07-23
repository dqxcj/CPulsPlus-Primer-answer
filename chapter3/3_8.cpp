#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s = "indulge";
    for (decltype(s.size()) i = 0; i < s.size(); i++)
        s[i] = 'X';
    cout << s << endl;
    return 0;
}