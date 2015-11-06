#include <iostream>
#include <vector>
#include <list>
#include <string>
int main() {
    std::list<const char *> l {"Hello", " ", "World"};
    std::vector<std::string> v;
    v.assign(l.cbegin(), l.cend());
    for (auto item : v) {
        std::cout << item;
    }
    std::cout << std::endl;
    return 0;
}