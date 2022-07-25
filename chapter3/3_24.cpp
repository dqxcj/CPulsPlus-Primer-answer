#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> a;
    int n;
    char c;
    while(cin >> n)
        a.push_back(n);
    for(auto i = a.begin(); i != a.end() - 1; i++)
        cout << *i + *(i + 1) << " ";
    cout << endl;
    for(auto i = a.begin(); i != a.begin() + a.size() / 2; i++)
        cout << *i + *(a.end() - (i - a.begin()) - 1) << " ";
    if(a.size() % 2 != 0)
        cout << *(a.begin() + a.size() / 2);
    cout << endl;
    return 0;
}