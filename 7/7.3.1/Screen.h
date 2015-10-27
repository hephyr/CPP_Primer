#ifndef SCREEN_H
#define SCREEN_H
#include <string>
class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) :
           hight(ht), width(wd), contents(ht*wd, " ") { };
    Screen(pos ht, pos wd, char c) :
           hight(ht), width(wd), contents(ht*wd, c) { };
private:
    pos cursor = 0;
    pos hight = 0, width = 0;
    std::string contents;
};
#endif //SCREEN_H