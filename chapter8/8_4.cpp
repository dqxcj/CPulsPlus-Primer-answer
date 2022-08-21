#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void lineToVec(const string &filename, vector<string> &svec) {
    string temp;
    ifstream File(filename);
    while(getline(File, temp)) {
        svec.push_back(temp);
    }
    File.close();
}

int main() {
    vector<string> svec;
    lineToVec("answer.md", svec);
    int j = 0;
    for(auto &i : svec) {
        cout << ++j << " " << i << endl;
    }
    return 0;
}