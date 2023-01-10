#include "TextQuery.h"
#include <fstream>
#include <sstream>
using namespace std;

TextQuery::TextQuery(ifstream &in) {
    string line;
    while(getline(in, line)) {
        allLine_.push_back(line);
    }

    for(int i = 0; i < allLine_.size(); i++) {
        istringstream words(allLine_[i]);
        string word;
        while(words >> word) {
            wordToLine_[word].insert(i);
        }
    }
}

