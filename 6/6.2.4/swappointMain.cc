#include <iostream>
#include "swappoint.h"
using namespace std;
int main() {
    int a = 1;
    int b = 2;
    int *p = &a;
    int *q = &b;
    swappoint(p, q);
    cout << *p << endl;
    cout << *q << endl;
    return 0;
}