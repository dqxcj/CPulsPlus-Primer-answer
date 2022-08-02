#include <iostream>
using namespace std;

int main() {
    void print(const int *cp);
    void print(const int *beg, const int *end);
    void print(const int ia[], size_t size);
    int i = 0, j[2] = {1, 2};
    print(&i);
    print(j);
    print(begin(j), end(j));
    print(&i, 1);
    print(j, end(j) - begin(j));
    return 0;
}

void print(const int *cp) {
    cout << *cp << endl;  //需要知道数组长度才能完整输出数组
}
void print(const int *beg, const int *end) {
    while(beg != end)
        cout << *beg++ << " "; 
    cout << endl; 
}
void print(const int ia[], size_t size) {
    for(size_t i = 0; i < size; ++i) 
        cout << ia[i] << " ";
    cout << endl;
}
