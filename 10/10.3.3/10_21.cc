#include <iostream>
int main() {
    int i = 10;
    auto f = [&i]() { return --i ? false : true; };
    while (!f()) {}
    std::cout << i << std::endl;
    return 0;
}