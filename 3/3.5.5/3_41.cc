#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v(arr, end(arr));
    for (auto i : v)
        cout << i << endl;
    
    return 0;
}