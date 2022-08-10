#ifndef _7_23_H
#define _7_23_H

#include <iostream>

class Screen {
public:
    //类型别名
    using pos = std::string::size_type;

    //构造函数
    Screen() = default;
    Screen(pos ht, pos wd): height_(ht), width_(wd), contents_(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c): height_(ht), width_(wd), contents_(ht * wd, c) {}

    //成员函数
    char get() const {return contents_[cursor_];}
    char get(pos r, pos c) const { return contents_[r * width_ + c]; }
    Screen &move(pos r, pos c);
    Screen &set(char c);
    Screen &set(pos r, pos col, char ch);
    Screen &display(std::ostream &os) { do_display(os); return *this; }
    const Screen &display(std::ostream &os) const { do_display(os); return *this; }
private:
    //成员函数
    void do_display(std::ostream &os) const { os << contents_; }
    //数据成员
    pos cursor_ = 0, height_ = 0, width_ = 0;  //光标位置，屏幕高，屏幕宽
    std::string contents_;
};

//成员函数定义
Screen &Screen::move(pos r, pos c) {
    pos row = r * width_;
    cursor_ = row + c;
    return *this;
}

Screen &Screen::set(char c) {
    contents_[cursor_] = c;
    return *this;
}

Screen &Screen::set(pos r, pos col, char ch) {
    contents_[r * width_ + col] = ch;
    return *this;
}

#endif