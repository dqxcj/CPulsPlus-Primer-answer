#include "StrBlob.h"

using namespace std;

StrBlob::StrBlob(): data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<vector<string>> il): data(make_shared<vector<string>>(il)) {}

