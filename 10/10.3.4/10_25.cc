#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using std::cout; using std::endl;
using std::vector; using std::string;
using namespace std::placeholders;
void elimDups(vector<string> &words);
bool check_size(const string &s, string::size_type sz);
void biggies(vector<string> &words, vector<string>::size_type sz);
void elimDups(vector<string> &words) {
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}
bool check_size(const string &s, string::size_type sz) {
    return s.size() >= sz;
}
void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    auto it = std::partition(words.begin(), words.end(), std::bind(check_size, _1, 5));
    std::for_each(words.begin(), it,
                  [](const string &s) { cout << s << " "; });
    cout << endl;
}
int main() {
    vector<string> v;
    string words;
    while (std::cin >> words)
        v.push_back(words);
    biggies(v, 5);
    return 0;
}