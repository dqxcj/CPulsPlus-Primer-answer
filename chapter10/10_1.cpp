#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec;
    int n;
    while(cin >> n)
        vec.push_back(n);
    cout << "5������" << count(vec.begin(), vec.end(), 5) << "��" << endl;
    return 0;
}