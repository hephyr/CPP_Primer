#include <iostream>
#include <string>
#include <vector>
#include <utility>

using std::cout; using std::cin; using std::endl;
using std::pair; using std::vector; using std::string;

int main() {
	string str;
	int i;
	vector<pair<string, int>> v;
	while (cin >> str) {
		cin >> i;
		v.push_back(pair<string, int> (str, i));
		//v.push_back(make_pair(str, i));
		//v.push_back({str, i}); //C++11
	}
	for (const auto &a : v) {
		cout << "pair:" << a.first << " " << a.second << endl;
	}
	return 0;
}