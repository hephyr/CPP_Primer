#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> s;
    string str;
    while (getline(cin, str))
        s.push_back(str);
    for (auto str_cnt : s)
        cout << str_cnt << endl;
    return 0;
}