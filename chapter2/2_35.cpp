#include <iostream>
using namespace std;

int main() {
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    cout << "i:" << typeid(i).name() << " j:" << typeid(j).name() << " k:" << typeid(k).name() << " p:" << typeid(p).name() << " j2:" << typeid(j2).name() << " k2:" << typeid(k2).name() << endl;
    return 0;
}