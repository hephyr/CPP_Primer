#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using std::list;
using std::cout;
using std::endl;
using std::vector;
int main() {
	vector<int> vec;
	list<int> lst;
	int i;
	while (std::cin >> i)
		lst.push_back(i);
	vec.resize(lst.size());
	std::copy(lst.cbegin(), lst.cend(), vec.begin());
	vector<int> v;
	v.reserve(10);
	std::fill_n(v.begin(), 10, 0);
	return 0;
}