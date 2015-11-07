#include <list>
#include <iostream>
#include <vector>
#include <forward_list>
int main() {
    std::vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> lst(vi.begin(), vi.end());
    std::forward_list<int> flst(vi.begin(), vi.end());
    auto lit = lst.begin();
    while (lit != lst.end()) {
        if (*lit % 2) {
            lit = lst.insert(lit, *lit);
            ++lit;
            ++lit; 
        } else
            lit = lst.erase(lit);
    }
    for (lit = lst.begin(); lit != lst.end(); ++lit)
        std::cout << *lit << std::endl;
    auto flit = flst.begin();
    auto prev = flst.before_begin();
    while (flit != flst.end()) {
        if (*flit & 0x1) {
            flit = flst.insert_after(flit, *flit);
            prev = flit;
            ++flit;
        } else
            flit = flst.erase_after(prev);
    }
    for (flit = flst.begin(); flit != flst.end(); ++flit)
        std::cout << *flit << std::endl;
    return 0;
}