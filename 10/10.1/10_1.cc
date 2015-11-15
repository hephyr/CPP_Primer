#include <iostream>
using std::cout; using std::endl;
#include <algorithm>
#include <vector>
using std::vector;
int main() {
	vector<int> v{1, 2, 2, 3, 1, 5, 6, 5, 9, 22};
	cout << count(v.cbegin(), v.cend(), 2) << endl;
	return 0;
}