#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> score = {"F", "D", "C", "B", "A", "A+"};
    int grade;
    string lettergrade;
    cin >> grade;
    lettergrade = grade < 60 ? score[0] : score[(grade - 50) / 10];
    cout << lettergrade << endl;
    return 0;
}