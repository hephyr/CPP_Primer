#include <iostream>
#include <cctype>
#include <map>
#include <string>

using std::endl;using std::cout;
using std::string; using std::map;
int main() {
    map<string, size_t> word_count;
    string word;
    while (std::cin >> word) {
        auto it = word.begin();
        while (it != word.end()) {
            *it = tolower(*it);
            if (ispunct(*it))
                word.erase(it);
            else
                ++it;
        }
        ++word_count[word];
    }
    for (const auto &w : word_count) {
        cout << w.first << " occurs " 
        << w.second << ((w.second - 1) ? " times.": " time.")
        << endl;
    }
    return 0;
}