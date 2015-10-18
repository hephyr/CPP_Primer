#include <iostream>
using namespace std;
int main() {
    int grade;
    cin >> grade;
    if (grade < 60)
        cout << "fail" << endl;
    else if (grade < 75)
        cout << "low pass" << endl;
    else if (grade < 90)
        cout << "pass" << endl;
    else
        cout << "high pass" << endl;
    return 0;
}