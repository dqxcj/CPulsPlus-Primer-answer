#include <iostream>
#include <vector>
using namespace std;

int fa(int n1, int n2) {
    return n1 + n2;
}

int fj(int n1, int n2) {
    return n1 - n2;
}

int fm(int n1, int n2) {
    return n1 * n2;
}

int fc(int n1, int n2) {
    return n1 / n2;
}

int main() {
    //方法一
    //int f(int, int);
    //vector<decltype(f) *> fvec = {fa, fj, fm, fc};
    //方法二
    vector<int (*)(int, int)> fvec = {fa, fj, fm, fc};
    
    for(auto i : fvec) {
        cout << i(8, 4) << endl;
    }
    return 0;
}