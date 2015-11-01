#include <iostream>
#include "reset.h"
int main() {
    int i = 10;
    std::cout << i << std::endl;
    reset(i);
    std::cout << i << std::endl;
    return 0;
}