#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec;
    list<int> li;
    vec.assign(ia, ia + 11);
    li.assign(ia, ia + 11);
    for(auto i = vec.begin(); i != vec.end();) {
        if(*i % 2 == 0) {
            i = vec.erase(i);
        } else {
            ++i;
        }
    }
    for(auto i = li.begin(); i != li.end();) {
        if(*i % 2) {
            i = li.erase(i);
        } else {
            ++i;
        }
    }
    for(auto &i : vec) {
        cout << i << " ";
    }
    cout << endl;
    for(auto &i : li) {
        cout << i << " ";
    }
    return 0;
}