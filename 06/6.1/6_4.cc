#include <iostream>
using std::cin; using std::cout; using std::endl;
long long fact(long long val) {
    long long ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}
int main() {
    long long ago;
    cin >> ago;
    cout << fact(ago) << endl;
    return 0;
}