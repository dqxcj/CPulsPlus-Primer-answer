#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec;
    int n;
    while(cin >> n)
        vec.push_back(n);
    cout << "5出现了" << count(vec.begin(), vec.end(), 5) << "次" << endl;
    return 0;
}