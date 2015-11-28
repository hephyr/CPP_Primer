#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
using std::cout; using std::endl;
using std::vector; using std::list;
int main() {
    vector<int> v;
    for (int i = 1; i < 10; ++i) {
        v.push_back(i);
    }
    list<int> l1, l2, l3;
    std::copy(v.cbegin(), v.cend(), inserter(l1, l1.begin()));
    std::copy(v.cbegin(), v.cend(), back_inserter(l2));
    std::copy(v.cbegin(), v.cend(), front_inserter(l3));
    for (auto &a : l1)
        cout << a << " ";
    cout << endl;
    for (auto &a : l2)
        cout << a << " ";
    cout << endl;
    for (auto &a : l3)
        cout << a << " ";
    cout << endl;
    return 0;
}