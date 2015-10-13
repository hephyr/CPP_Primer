#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int i;
    while (cin >> i)
        v.push_back(i);
    int end = v.size() - 1;
    int begin = 0;
    for (; (begin != end) && (end + 1 != begin);
         begin++, end--) {
        int sum = v[begin] + v[end];
        cout << sum << endl;
    }
    if (end == begin)
        cout << v[begin] << endl;
    return 0;
}