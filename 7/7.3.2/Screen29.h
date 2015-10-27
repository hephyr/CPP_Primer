#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <string>
class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) :
           height(ht), width(wd), contents(ht*wd, ' ') { };
    Screen(pos ht, pos wd, char c) :
           height(ht), width(wd), contents(ht*wd, c) { };
    inline Screen move(pos r, pos c);
    inline Screen set(char ch);
    inline Screen set(pos r, pos c, char ch);
    Screen display(std::ostream &os) {
        do_display(os);
        return *this;
    }
private:
    void do_display(std::ostream &os) const {os << contents;}
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};
inline Screen Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}
inline Screen Screen::set(char ch) {
    contents[cursor] = ch;
    return *this;
}
inline Screen Screen::set(pos r, pos col, char ch) {
    contents[r*width + col] = ch;
    return *this;
}
#endif //SCREEN_H