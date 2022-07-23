#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::endl;

int main() {
    int n;
    vector<int> a;
    while(cin >> n)
        a.push_back(n);
    for(int i = 0; i < a.size() - 1; i++)
        cout << a[i] + a[i + 1] << " ";
    cout << endl;
    for(int i = 0; i < a.size() / 2; i++)
        cout << a[i] + a[a.size() - i - 1] << " ";
    cout << a[a.size() / 2] << endl;
    return 0;
}