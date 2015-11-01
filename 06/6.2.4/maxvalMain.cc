#include <iostream>
#include "maxval.h"
using namespace std;
int main() {
    int i, j;
    cin >> i;
    cin >> j;
    cout << maxval(i, &j) << endl;
    return 0;
}