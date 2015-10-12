#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<int> v1;
    for (auto i : v1)
        cout << "v1" << i << endl;
    vector<int> v2(10);
    for (auto i : v2) {
        cout << "v2" << i << endl;
    }
    vector<int> v3(10, 42);
    for (auto i : v3)
        cout << "v3" << i << endl;
    vector<int> v4{10};
    for (auto i : v4)
        cout << "v4" << i << endl;
    vector<int> v5{10, 42};
    for (auto i : v5)
        cout << "v5" << i << endl;
    vector<string> v7{10, "hi"};
    for (auto i : v7)
        cout << "v7" << i << endl;
    return 0;
}