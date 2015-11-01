#include <iostream>
using namespace std;
int main() {
    int dividend, divisor;
    cin >> dividend >> divisor;
    cout << static_cast<double>(dividend)
          / static_cast<double>(divisor) << endl;
    return 0;
}