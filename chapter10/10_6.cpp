#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vi = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    for(auto i : vi) {
        cout << i << " ";
    } 
    cout << endl;
    fill_n(vi.begin(), vi.size(), 1);
    for(auto i : vi) {
        cout << i << " ";
    } 
    return 0;
}