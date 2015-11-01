#include "swappoint.h"
void swappoint(int* &p, int* &q) {
    auto temp = p;
    p = q;
    q = temp;
}