#include <iostream>
#include "StrBlob.h"
using namespace std;

int main() {
    StrBlob stb1;
    StrBlob stb2 = {"hello", "world", "hh"};
    stb1 = stb2;
    stb2.PushBack("nihao");
    stb1.Output(cout);
    return 0;
}