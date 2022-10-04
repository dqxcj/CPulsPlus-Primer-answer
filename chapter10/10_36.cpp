#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> li = {1, 2, 0, 3, 4, 5, 6, 7, 0, 8, 10};
    auto it = find(li.crbegin(), li.crend(), 0);
    cout << *(++it);
    return 0;
}