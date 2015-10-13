#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int i;
    while (cin >> i)
        v.push_back(i);
    for (auto itr = v.begin(); (itr+1) != v.end(); itr++) {
        int sum = *itr + *(itr+1);
        cout << sum << endl;
    }
    return 0;
}