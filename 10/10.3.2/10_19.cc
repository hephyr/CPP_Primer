#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using std::cout; using std::endl;
using std::string; using std::vector;
using std::sort; using std::unique;
using std::stable_sort; using std::for_each;
using std::stable_partition;
void elimDups(vector<string> &words);
string make_plural(size_t ctr, const string &word, const string &ending);
void biggies(vector<string> &words, vector<string>::size_type sz);
int main() {
    vector<string> v;
    string word;
    while (std::cin >> word) {
        v.push_back(word);
    }
    biggies(v, 5);
    return 0;
}
void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}
string make_plural(size_t ctr, const string &word, const string &ending) {
	return (ctr > 1) ? word + ending : word;
}
void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    stable_sort(words.begin(), words.end(),
    			[](const string &a, const string &b)
    				{ return a.size() < b.size(); });
    auto wc = stable_partition(words.begin(), words.end(),
    				  [sz](const string &a)
    				  { return a.size() >= sz; });
    auto count = wc - words.begin();
    cout << count << make_plural(count, " word", "s")
    	 << " of length " << sz << " or longer" << endl;
    for_each(words.begin(), wc,
    		 [](const string &s){ cout << s << " "; });
    cout << endl;
}