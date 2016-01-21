#include <iostream>
#include <map>
#include <string>

using std::cout; using std::endl;
using std::string; using std::map;

int main() {
    map<string, size_t> word_count;
    string word;
    // while (std::cin >> word) {
    //     ++word_count[word];
    // }
    while (std::cin >> word) {
        auto ret = word_count.insert({word, 1});
        if (!ret.second) {
            ++(ret.first->second);
        }
    }
    for (const auto &w : word_count) {
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times." : " time.") << endl;
    }
    return 0;
}