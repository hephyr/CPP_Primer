#include <iostream>
#include <cctype>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> v;
    string s;
    while (cin >> s) {
        for (auto &c : s)
            c = toupper(c);
        v.push_back(s);
    }
    for (auto pri :v)
        cout << pri << endl;
    return 0;
}