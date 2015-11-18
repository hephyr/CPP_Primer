#include <iostream>
#include <algorithm>
#include <vector>
using std::cout; using std::endl;
using std::string; using std::vector;
using std::sort; using std::unique;
using std::stable_sort;
void elimDups(vector<string> &words);
bool isShorter(const string &s1, const string &s2);
int main() {
    vector<string> v;
    string word;
    while (std::cin >> word) {
        v.push_back(word);
    }
    elimDups(v);
    stable_sort(v.begin(), v.end(), isShorter);
    for (const auto &s : v)
        cout << s << " ";
    cout << endl;
    return 0;
}
void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}
bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}