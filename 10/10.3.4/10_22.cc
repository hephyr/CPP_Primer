#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using std::cout; using std::endl;
using std::string; using std::vector;
using std::bind;
using namespace std::placeholders;
void elimDups(vector<string> &words);
bool isShorter(const string &a, const string &b);
bool check_size(const string &s, string::size_type sz);
void more(vector<string> &words, string::size_type sz);

int main() {
    vector<string> v;
    string words;
    while (std::cin >> words) {
        v.push_back(words);
    }
    more(v, 6);
    return 0;
}
void elimDups(vector<string> &words) {
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}
bool isShorter(const string &a, const string &b) {
    return a.size() < b.size();
}
bool check_size(const string &s, string::size_type sz) {
    return s.size() > sz;
}
void more(vector<string> &words, string::size_type sz) {
    elimDups(words);
    std::stable_sort(words.begin(), words.end(), isShorter);
    auto check_sz = bind(check_size, _1, sz);
    auto wc = std::find_if(words.begin(), words.end(), check_sz);
    std::for_each(wc, words.end(),
             [](const string &s) { cout << s << " "; });
    cout << endl;
}