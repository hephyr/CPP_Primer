#include <iostream>
int fact(int val) {
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}
int main() {
    int i = 10;
    std::cout << fact(i) << std::endl;
    return 0;
}