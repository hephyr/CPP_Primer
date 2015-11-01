#include <iostream>
#include <vector>
using namespace std;
int main() {
    int in;
    vector<int> v;
    while (cin >> in)
        v.push_back(in);
    for (int i : v)
        cout << i << endl;
    return 0;
}