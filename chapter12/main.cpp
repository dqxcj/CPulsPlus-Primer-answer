#include <iostream>
#include "StrBlob.h"
#include "StrBlobPtr.h"
using namespace std;

int main() {
    StrBlob stb1;
    StrBlob stb2 = {"hello", "world", "hh"};
    stb1 = stb2;
    stb2.PushBack("nihao");
    cout << stb1.begin().deref() << endl;
    return 0;
}