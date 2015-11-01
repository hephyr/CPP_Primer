#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int arr_size = 5;
    int arr1[arr_size], arr2[arr_size];
    int *p1 = arr1;
    int *p2 = arr2;
    int i;
    cout << "Input array1 element" << endl;
    while (p1 != end(arr1) && cin >> i) {
        *p1 = i;
        p1++;
    }
    cout << "Input array2 element" << endl;
    while (p2 != end(arr2) && cin >> i) {
        *p2 = i;
        p2++;
    }
    p1 = arr1;
    p2 = arr2;
    while (p1 != end(arr1)) {
        if (*p1 == *p2) {
            p1++;
            p2++;
            continue;
        }
        else {
            cout << "Two array are different." << endl;
            break;
        }
    }
    if (p1 == end(arr1))
        cout << "Two array are identical." << endl;

    //vector
    vector<int> v1(arr_size), v2(arr_size);
    auto it = v1.begin();
    cout << "Input v1 element" << endl;
    while (it != v1.end() && cin >> i) {
        *it = i;
        it++;
    }
    it = v2.begin();
    cout << "Input v2 element" << endl;
    while (it != v2.end() && cin >> i) {
        *it = i;
        it++;
    }
    if (v1 == v2)
        cout << "Two vector are identical." << endl;
    else
        cout << "Two vector are different." << endl;
    return 0;
}