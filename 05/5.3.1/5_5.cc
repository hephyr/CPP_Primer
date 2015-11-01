#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> score = {"F", "D", "C", "B", "A", "A+"};
    string lettergrade;
    int grade;
    cin >> grade;
    if (grade < 60)
        lettergrade = score[0];
    else
        lettergrade = score[(grade - 50) / 10];
    cout << lettergrade << endl;
    return 0;
}