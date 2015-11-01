#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int i;
    while(cin >> i)
        v.push_back(i);
    for (auto data : v)
        cout << (data%2 == 1 ? data*=2 : data) << endl;
    return 0;
}