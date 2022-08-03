#include <iostream>
#include <vector>
using namespace std;

int main() {
    void Printv(vector<int>::iterator beg, vector<int>::iterator end);
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Printv(v.begin(), v.end());
    return 0;
}

void Printv(vector<int>::iterator beg, vector<int>::iterator end) {
    if(beg == end)
        return;
    //逆序输出
    Printv(beg + 1, end);
    cout << *beg << " ";
    

    //正序输出
    //cout << *beg << " ";
    //Printv(beg + 1, end);
}
