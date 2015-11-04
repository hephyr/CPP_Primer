#include <iostream>
#include <vector>
bool func(std::vector<int>::const_iterator begin,
          std::vector<int>::const_iterator end, int i) {
    while (begin != end) {
        if (*begin == i)
            return true;
        ++begin;
    }
    return false;
}
int main() {
    std::vector<int> v{1, 2, 3, 4, 5};
    int i = 5;
    std::cout << func(v.cbegin(), v.cend(), i) << std::endl;
}