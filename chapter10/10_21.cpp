#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10;
    auto f = [&n]() -> bool {while(n > 0) {n--;cout << n << " ";} return n == 0;};
    cout << f() << "\n" << n << endl;
    return 0;
}