#include <iostream>
#include "ex.h"
int main() {
    int a = 10;
    int b = 20;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    exchange(&a, &b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    return 0;
}