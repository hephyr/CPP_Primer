#include <iostream>
#include <vector>
using std::vector;
int main() {
    vector<int> v {1,2,3,4,5};
    vector<double> bv(v.begin(), v.end());
    for (auto item : bv)
        std::cout << item << std::endl;
    return 0;
}