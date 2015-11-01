#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v1, v2;
    int i;
    cout << "Input the element of v1" << endl;
    while (cin >> i)
        v1.push_back(i);
    cin.clear();
    cout << "Input the element of v2" << endl;
    while (cin >> i)
        v2.push_back(i);
    if (v2.size() < v1.size()) {
        vector<int> temp = v1;
        v1 = v2;
        v2 = temp;
    }
    auto beg1 = v1.begin();
    auto beg2 = v2.begin();
    for (; beg1 != v1.end() && *beg1 == *beg2; ++beg1, ++beg2);
    if (beg1 == v1.end())
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}