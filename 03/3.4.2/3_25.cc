#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        auto itr = scores.begin();
        grade /= 10;
        *(itr+grade) = *(itr+grade) + 1;
    }
    for (auto i : scores)
        cout << i << endl;
    return 0;
}