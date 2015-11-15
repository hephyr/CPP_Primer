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
	copy(lst.cbegin(), lst.cend(), vec);
	return 0;
}