#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using std::cout; using std::endl;
using std::vector;
int main() {
	vector<int> v{1, 2, 3, 4};
	for (auto &val : v)
		cout << val << " ";
	cout << endl;
	fill_n(v.begin(), v.size(), 0);
	for (auto &val : v)
		cout << val << " ";
	cout << endl;
	return 0;
}