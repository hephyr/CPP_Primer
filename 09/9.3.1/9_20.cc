#include <iostream>
#include <deque>
#include <list>
int main() {
    std::list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::deque<int> odd, even;
    for (auto &val : l)
        // if (val % 2 == 1)
        //     odd.push_back(val);
        // else
        //     even.push_back(val);
        (val & 0x1 ? odd : even).push_back(val);
    for (auto &val : odd)
        std::cout << val << std::endl;
    for (auto &val : even)
        std::cout << val << std::endl;
    return 0;
}