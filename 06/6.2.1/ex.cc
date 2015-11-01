#include "ex.h"
void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}