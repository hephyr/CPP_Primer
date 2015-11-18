#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using std::endl; using std::cout;
using std::string; using std::vector;
using std::partition;
bool isshorterthan(const string &s) {
    return s.size() < 5;
}
int main() {
    vector<string> v;
    string words;
    while (std::cin >> words)
        v.push_back(words);
    auto more_end = partition(v.begin(), v.end(), isshorterthan);
    while (more_end != v.end()) {
        cout << *more_end << " ";
        ++more_end;
    }
    cout << endl;
    return 0;
}