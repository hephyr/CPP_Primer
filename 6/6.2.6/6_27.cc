#include <iostream>
#include <initializer_list>
using namespace std;
int Sum(initializer_list<int> il);
int main() {
    cout << Sum({1, 2, 3, 4, 5, 6, 7}) << endl;
    return 0;
}
int Sum(initializer_list<int> il) {
    int sum = 0;
    for (auto &i : il)
        sum += i;
    return sum;
}