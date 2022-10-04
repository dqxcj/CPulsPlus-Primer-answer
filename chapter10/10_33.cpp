#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream infile(argv[1]);
    ofstream outfile1(argv[2]), outfile2(argv[3]);
    istream_iterator<int> int_isit(infile), eof;
    ostream_iterator<int> int_osit1(outfile1, " "), int_osit2(outfile2, "\n");
    vector<int> vi;
    while(int_isit != eof) {
        vi.push_back(*int_isit++);
    }
    for(auto &i : vi) {
        if(i % 2) {
            int_osit1 = i;
        } else {
            int_osit2 = i;
        }
    }
    return 0; 
}