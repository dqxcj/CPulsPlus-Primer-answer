#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> flist = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto pre = flist.before_begin();
    auto curr = flist.begin();
    while(curr != flist.end()) {
        if(*curr % 2) {
            curr = flist.insert_after(curr, *curr);
            ++curr;
            ++pre;
            ++pre;  //forward_list 的迭代器不支持加减运算，只能多次使用自增符
        } else if(!(*curr % 2)) {
            curr = flist.erase_after(pre);
        }
    }
    for(auto &i : flist) {
        cout << i << " "; 
    }
    return 0;
}