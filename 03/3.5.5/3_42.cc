#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int arr_size = 5;
    int arr[arr_size];
    vector<int> v(arr_size,1);
    auto itr = v.begin();
    int i = 0;
    while (itr != v.end()) {
        arr[i] = *itr;
        i++;
        itr++;
    }
    for (auto ele : arr)
        cout << ele << endl;
    return 0;
}