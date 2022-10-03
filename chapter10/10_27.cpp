#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> vi = {1, 1, 1, 4, 5, 6, 7, 7, 7};
    list<int> li;
    auto it = back_inserter(li);
    unique_copy(vi.begin(), vi.end(), it);
    for(auto i : li) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}