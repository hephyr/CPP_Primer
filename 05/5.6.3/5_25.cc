#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    int dividend, divisor;
    while (cin >> dividend >> divisor){
        try {
            cout << static_cast<double>(dividend)
                  / static_cast<double>(divisor) << endl;
            if (divisor == 0)
                throw runtime_error("0 can not be divisor.");
            else
                break;
        } catch (runtime_error err) {
            cout << err.what()
                 << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }
    return 0;
}