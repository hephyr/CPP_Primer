#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v(10);
    int i = 0;
    for (auto it = v.begin(); it != v.end(); it++) {
        *it = i;
        i++;
    }
    for (auto data : v)
        cout << data << endl;
    vector<int> v2(v);
    for (auto data : v2)
        cout << data << endl;
    return 0;
}