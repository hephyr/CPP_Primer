#include <iostream>
#include <string>
#include <vector>
using std::cout; using std::endl; using std::string; using std::vector;
int main() {
    vector<string> v{"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    int sum = 0;
    for (auto item : v) {
        sum += stoi(item);
    }
    cout << sum << endl;
    return 0;
}