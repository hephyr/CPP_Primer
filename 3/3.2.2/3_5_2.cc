#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, plus_s;
    cin >> str;
    plus_s = str;
    while (cin >> str)
        plus_s += (" " + str);
    cout << plus_s << endl;
    return 0;
}