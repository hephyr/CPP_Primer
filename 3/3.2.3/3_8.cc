#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    for (int i = 0; isprint(str[i]); i++)
        str[i] = 'X';
    cout << str << endl;
    int i = 0;                  //The i in for is unable to use
    getline(cin, str);
    while (isprint(str[i])) {
        str[i] = 'X';
        i++;
    }
    cout << str << endl;
    return 0;
}