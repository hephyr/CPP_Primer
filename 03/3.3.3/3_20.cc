#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int i;
    while (cin >> i)
        v.push_back(i);
    for (int i = 0;i != v.size() - 1;i++) {
        int sum = v[i] + v[i+1];
        cout << sum << endl;
    }
    return 0;
}