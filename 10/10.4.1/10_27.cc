#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using std::cout; using std::endl;
using std::vector; using std::list;
int main() {
    vector<int> v{1, 1, 2, 2, 3, 4, 5, 6, 6};
    list<int> l;
    std::unique_copy(v.begin(), v.end(), back_inserter(l));
    for (auto &val : l)
        cout << val << " ";
    cout << endl;
    return 0;
}