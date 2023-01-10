#include <iostream>
#include <memory>
#include <string>
using namespace std;

int main() {
    allocator<string> alloc;
    auto const p = alloc.allocate(10);
    auto q = p;
    int count = 0;
    string s;
    while(cin >> s && q != p + 10) {
        alloc.construct(q++, s);
        count++;
    }
    for(auto it = p; it != q; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    while(--q != p) {
        alloc.destroy(q);
    }
    alloc.deallocate(p, count);
    return 0;
}