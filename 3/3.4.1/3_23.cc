#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int i;
    while (cin >> i)
        v.push_back(i);
    for (auto it = v.begin(); it != v.end(); it++)
        *it = *it * 2;
    for (auto it : v)
        cout << it << endl;
    return 0;
}