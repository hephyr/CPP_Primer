#include <iostream>
using namespace std;
int main() {
    int a[10];
    int *beg = begin(a);
    int *last = end(a);
    while(beg != last) {
        *beg = 0;
        beg++;
    }
    for (auto data : a)
        cout << data << endl;
    return 0;
}