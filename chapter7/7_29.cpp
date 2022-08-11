#include <iostream>
#include <string>
using namespace std;

class Screen {
public:
    //类型别名
    using pos = string::size_type;

    //构造函数
    Screen() = default;
    Screen(pos ht, pos wd): height_(ht), width_(wd), contents_(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c): height_(ht), width_(wd), contents_(ht * wd, c) {}

    //成员函数
    char get() const {return contents_[cursor_];}
    char get(pos r, pos c) const { return contents_[r * width_ + c]; }
    Screen move(pos r, pos c);
    Screen set(char c);
    Screen set(pos r, pos col, char ch);
    Screen display(ostream &os) { do_display(os); return *this; }
    const Screen display(ostream &os) const { do_display(os); return *this; }
private:
    //成员函数
    void do_display(ostream &os) const { os << contents_; }
    //数据成员
    pos cursor_ = 0, height_ = 0, width_ = 0;  //光标位置，屏幕高，屏幕宽
    string contents_;
};

//成员函数定义
Screen Screen::move(pos r, pos c) {
    pos row = r * width_;
    cursor_ = row + c;
    return *this;
}

Screen Screen::set(char c) {
    contents_[cursor_] = c;
    return *this;
}

Screen Screen::set(pos r, pos col, char ch) {
    contents_[r * width_ + col] = ch;
    return *this;
}

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