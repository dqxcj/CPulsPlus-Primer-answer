#include <iostream>
#include <string>
using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s");

int main() {
    cout << make_plural(2, "success", "es") << "\n" 
         <<make_plural(2, "failure") << endl;
    return 0;
}

string make_plural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}
