#include <iostream>
#include "7_23.h"
using namespace std;

int main() {
    Screen my_screen(5, 5, 'X');
    my_screen.move(4, 0).set('#').display(cout);
    cout << endl;
    my_screen.display(cout);
    cout << endl;
    cout << my_screen.get() << endl;
    my_screen.move(1, 0).set('&').display(cout);
    cout << endl << my_screen.get() << ' ' << my_screen.get(4, 0) << endl;
    return 0;
}