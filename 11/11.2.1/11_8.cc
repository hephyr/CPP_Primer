#include <iostream>
#include <string>
#include <vector>

using std::vector; using std::string;
using std::cin; using std::cout;
using std::endl;

int main() {
    vector<string> words;
    string str;
    while (cin >> str) {
        auto it = words.begin();
        for (; it != words.end(); ++it) {
            if (*it == str) {
                break;
            }
        }
        if (it == words.end()) {
            words.push_back(str);
        }
    }
    for (const auto &w : words) {
        cout << w << endl;
    }
    return 0;
}