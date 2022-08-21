#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void wordToVec(const string filename, vector<string> &svec) {
    string temp;
    ifstream File(filename);
    while(File >> temp) {
        svec.push_back(temp);
    }
    File.close();
}

int main() {
    vector<string> svec;
    wordToVec("answer.md", svec);
    int j = 0;
    for(auto &i : svec) {
        cout << ++j << " " << i << endl;
    }
    return 0;
}