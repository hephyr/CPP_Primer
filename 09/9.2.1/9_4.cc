#include <iostream>
#include <vector>
bool func(std::vector<int>::const_iterator begin,
          std::vector<int>::const_iterator end, int i) {
    for (; *begin != i && begin != end; ++begin);
    if (begin == end)
        return false;
    else
        return true;
}
int main() {
    std::vector<int> v{1, 2, 3, 4, 5};
    int i = 1;
    std::cout << func(v.cbegin(), v.cend(), i) << std::endl;
}