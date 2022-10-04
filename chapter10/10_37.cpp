#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> li(5);
    copy(vi.crbegin() + 2, vi.crend() - 3, li.begin());
    for(auto i : li) {
        cout << i << " ";
    }
    return 0;
}
