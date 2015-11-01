#include <iostream>
using namespace std;
int main() {
    int grade;
    cin >> grade;
    cout << (grade < 60 ? "fail" 
                        : (grade < 75 ? "low pass" 
                        : (grade < 90 ? "pass" 
                        : "high pass"))) << endl;
    return 0;
}