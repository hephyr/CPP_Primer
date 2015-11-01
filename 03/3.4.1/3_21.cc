#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<int> v1;
    for (auto it = v1.begin(); it != v1.end(); it++)
        cout << "v1" << *it << endl;
    vector<int> v2(10);
    for (auto it = v2.begin(); it != v2.end(); it++)
        cout << "v2" << *it << endl;
    vector<int> v3(10, 42);
    for (auto it = v3.begin(); it != v3.end(); it++)
        cout << "v3" << *it << endl;
    vector<int> v4{10};
    for (auto it = v4.begin(); it != v4.end(); it++)
        cout << "v4" << *it << endl;
    vector<int> v5{10, 42};
    for (auto it = v5.begin(); it != v5.end(); it++)
        cout << "v5" << *it << endl;
    vector<string> v7(10, "hi");
    for (auto it = v7.begin(); it != v7.end(); it++)
        cout << "v7" << *it << endl;
    return 0;
}