#include <iostream>
using namespace std;
int abs(int val) {
    if (val < 0)
        return -val;
    else
        return val;
}
int main() {
    int i;
    cin >> i;
    cout << abs(i) << endl;
    return 0;
}