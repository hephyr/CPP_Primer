#include <iostream>
#include <vector>
std::vector<int>::iterator func(std::vector<int>::iterator begin, std::vector<int>::iterator end, int i) {
    while (begin != end) {
        if (*begin == i)
            return begin;
        ++begin;
    }
    std::cerr << "Not find" << std::endl;
    exit(-1);
}
int main() {
    std::vector<int> v{1, 2, 3, 4, 5};
    int i = 10;
    auto temp = func(v.begin(), v.end(), i);
    std::cout << *temp << std::endl;
}