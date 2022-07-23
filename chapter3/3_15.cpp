#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    string n;
    vector<string> a;
    while (cin >> n)
    {
        a.push_back(n);
    }
    for (auto i : a)
        cout << i << endl;
    return 0;
}