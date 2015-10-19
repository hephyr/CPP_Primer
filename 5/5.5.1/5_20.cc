#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, temp;
    while (cin >> str) {
        if (str == temp)
            break;
        else
            temp = str;
    }
    if (cin.eof())
        cout << "No words was repeated." << endl;
    else
        cout << str << " occurs twice." << endl;
    return 0;
}