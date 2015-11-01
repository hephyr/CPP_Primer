#include <iostream>
using namespace std;
int main() {
    int array[10];
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
        array[i] = i;
    for (auto data : array)
        cout << data << endl;
    return 0;
}