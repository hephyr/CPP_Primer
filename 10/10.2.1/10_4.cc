#include <iostream>
#include <numeric>
#include <vector>
using std::vector;
int main() {
	vector<double> v{1.1, 3.14};
	std::cout << accumulate(v.cbegin(), v.cend(), 0.0) << std::endl;
	return 0;
}