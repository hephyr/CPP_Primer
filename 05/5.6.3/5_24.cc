#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    int dividend, divisor;
    cin >> dividend >> divisor;
    if (divisor == 0)
        throw runtime_error("0 can't be divisor.");
    cout << static_cast<double>(dividend)
          / static_cast<double>(divisor) << endl;
    return 0;
}