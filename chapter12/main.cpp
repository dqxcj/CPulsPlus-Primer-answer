#include <iostream>
#include "StrBlob.h"
using namespace std;

int main() {
    StrBlob stb1;
    StrBlob stb2 = {"hello", "world", "hh"};
    stb1 = stb2;
    stb2.PushBack("nihao");
    for(auto it = stb1.begin(); it.Curr() != stb1.Size(); it.incr()) {
        cout << it.deref() << endl;
    }
    return 0;
}