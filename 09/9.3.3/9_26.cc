#include <iostream>
#include <vector>
#include <list>
int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::vector<int> v(std::begin(ia), std::end(ia));
    std::list<int> l(std::begin(ia), std::end(ia));
    auto lit = l.begin();
    auto vit = v.begin();
    while (lit != l.end())
        (*lit % 2) ? (lit = l.erase(lit)) : ++lit;
    while (vit != v.end())
        (*vit % 2) ? ++vit : (vit = v.erase(vit));
    for (lit = l.begin(); lit != l.end(); ++lit)
        std::cout << *lit << std::endl;
    for (vit = v.begin(); vit != v.end(); ++vit)
        std::cout << *vit << std::endl;
    return 0;
}