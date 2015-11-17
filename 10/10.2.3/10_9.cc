#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::unique;
using std::string;
int main() {
	vector<string> v;
	string word;
	while (std::cin >> word)
		v.push_back(word);
	sort(v.begin(), v.end());
	auto end_unique = unique(v.begin(), v.end());
	v.erase(end_unique, v.end());
	for (auto &w : v) {
		cout << w << " ";
	}
	cout << endl;
	return 0;
}