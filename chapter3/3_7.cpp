#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s = "indulge";
    for (char &c : s)
        c = 'X';
    cout << s << endl;
    return 0;
}