#include <iostream>
using namespace std;
int foo() {
    static int aval = 0;
    if (aval == 0) {
        aval = 1;
        return 0;
    }
    return 1;
}
int main() {
    int i;
    cin >> i;
    while (i-- > 0)
        cout << foo() << endl;
}