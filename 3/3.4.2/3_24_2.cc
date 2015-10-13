#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int i;
    while (cin >> i)
        v.push_back(i);
    auto bit = v.begin();
    auto eit = v.end() - 1;
    while (bit != eit && bit != eit + 1) {
        int sum = *bit + *eit;
        cout << sum << endl;
        bit++;
        eit--;
    }
    if (bit == eit)
        cout << *bit << endl;
    return 0;
}