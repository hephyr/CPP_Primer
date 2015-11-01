#include "Chapter6.h"
long long fact(long long val) {
    long long ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}