#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    vector<int> a;
    while(cin >> n) {
        a.push_back(n);
    }
    for(auto i : a) 
        cout << i << endl;
    return 0;
}