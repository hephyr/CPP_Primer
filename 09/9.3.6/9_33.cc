#include <iostream>
#include <vector>
int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto begin = v.begin();
    while (begin != v.end()) {
        ++begin;
        /*begin = */v.insert(begin, 0);
        ++begin;
    }
    for (auto i : v)
        std::cout << i << std::endl;
    return 0;
}