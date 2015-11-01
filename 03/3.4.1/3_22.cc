#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main() {
    vector<string> v;
    string s;
    while (getline(cin, s))
        v.push_back(s);
    for (auto vit = v.begin(); vit != v.end(); vit++)
        for (auto sit = (*vit).begin(); sit != (*vit).end(); sit++) //(*vit)
            *sit = toupper(*sit);
    for (auto it : v)
        cout << it << endl;
    return 0;
}