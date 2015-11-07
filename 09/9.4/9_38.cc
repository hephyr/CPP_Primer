#include <iostream>
#include <vector>
int main() {
    std::vector<int> v;
    v.assign({1, 2, 3, 4, 5, 6, 7});
    std::cout << "size:" << v.size() << std::endl;
    std::cout << "capacity" << v.capacity() << std::endl;
    v.reserve(15);
    std::cout << "size:" << v.size() << std::endl;
    std::cout << "capacity" << v.capacity() << std::endl;
    while (v.size() != v.capacity())
        v.push_back(0);
    std::cout << "size:" << v.size() << std::endl;
    std::cout << "capacity" << v.capacity() << std::endl;
    v.push_back(0);
    std::cout << "size:" << v.size() << std::endl;
    std::cout << "capacity" << v.capacity() << std::endl;
    return 0;
}