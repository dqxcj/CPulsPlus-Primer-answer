#include <iostream>
#include <memory>

using namespace std;

int main() {
    unique_ptr<int> uptr(new int(10));
    unique_ptr<int> uptr2(uptr);
    unique_ptr<int> uptr3 = uptr;
    return 0;
}