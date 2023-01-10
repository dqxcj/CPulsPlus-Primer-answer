#include "TextQuery.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in("infile");
    TextQuery tq(in);
    QueryResult qr(tq.query("time"));
    qr.print(cout);
    cout << endl;
    return 0;
}