#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> lines;
    string temp;
    ifstream inFile("8_10_data.txt");
    while(getline(inFile, temp)) {
        lines.push_back(temp);
    }
    for(auto &s : lines) {
        istringstream inString(s);
        while(inString >> temp) {
            cout << temp << " % ";
        }
        cout << endl;
    }
    return 0;
}