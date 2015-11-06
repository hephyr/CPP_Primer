//This is wrong program
#include <iostream>
#include <list>
#include <vector>
int main() {
    std::vector<int> v {1, 2, 3};
    std::list<int> l {1, 2, 3};
    if (v == l)
        std::cout << "v = l" << std::endl;
    else
        std::cout << "v != l" << std::endl;
    return 0;
}