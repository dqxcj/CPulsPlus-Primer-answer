#include <iostream>
#include "StrBlob.h"
using namespace std;

int main() {
    StrBlob stb2 = {"hello", "world", "hh"};
    const StrBlob stb1 = stb2;
    stb2.PushBack("nihao");
    for(auto it = stb1.begin(); it.Curr() != stb1.Size(); it.incr()) {
        cout << it.deref() << endl;
    }
    return 0;
}