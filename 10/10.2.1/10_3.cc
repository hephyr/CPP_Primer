#include <iostream>
#include <vector>
#include <numeric>
using std::vector;
int main() {
	vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout << accumulate(v.cbegin(), v.cend(), 0) << std::endl;
	return 0;
}