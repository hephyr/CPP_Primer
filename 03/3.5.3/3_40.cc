#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    char c1[] = "Hello Pixar!";
    char c2[] = "Hello Google!";
    char c3[100];
    strcpy(c3, c1);
    strcat(c3, c2);
    cout << c3 << endl;
    return 0;
}