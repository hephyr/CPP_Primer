#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1, s2;
    s1 = "Hello";
    s2 = "Hollo";
    if (s1 < s2)
        cout << s2 << ">" << s1 << endl;
    else
        cout << s1 << ">" << s2 << endl;
    char c1[] = "Hello";
    char c2[] = "Hollo";
    if (c1 > c2)
        cout << c1 << ">" << c2 << endl;
    else
        cout << c2 << ">" << c1 << endl;
    return 0;
}