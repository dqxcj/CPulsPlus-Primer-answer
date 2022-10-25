#include <iostream>
#include <string>
#include <fstream>

#include "StrBlob.h"
#include "StrBlobPtr.h"

using namespace std;

int main() {
    StrBlob sb;
    ifstream in("12_20_infile.txt");
    string line;
    while(getline(in, line)) {
        sb.PushBack(line);
    }
    for(auto sbp = sb.begin(); sbp.Curr() < sb.Size(); sbp.incr()) {
        cout << sbp.deref() << endl;
    }
    return 0;
}