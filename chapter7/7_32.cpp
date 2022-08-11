#include <iostream>
#include "7_32.h"
using namespace std;

int main() {
    WindowMgr wm;
    Screen my_screen(5, 5, 'X');
    my_screen.move(4, 0).set('#').display(cout);
    cout << endl;
    my_screen.display(cout);
    cout << endl;
    cout << my_screen.get() << endl;
    my_screen.move(1, 0).set('&').display(cout);
    cout << endl << my_screen.get() << ' ' << my_screen.get(4, 0) << endl;
    wm.screens_.push_back(my_screen);
    wm.clear(0);
    wm.screens_[0].display(cout);
    cout << '\n' << "over!" << endl;
    return 0;
}