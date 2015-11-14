#include <iostream>
#include <string>
#include <vector>
using std::cout; using std::endl; using std::string; using std::vector;
int main() {
    vector<string> v{"1.1", "2.2", "3.3", "4.4", "5.5", "6.6", "7.7", "8.8", "9.9"};
    double sum = 0;
    for (auto item : v) {
        sum += stod(item);
    }
    cout << sum << endl;
    return 0;
}