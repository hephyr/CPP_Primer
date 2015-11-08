#include <iostream>
#include <vector>
#include <string>
int main() {
	std::vector<char> v;
	char ch;
	while (std::cin >> ch) {
		v.push_back(ch);
	}
	std::string str(v.begin(), v.end());
	std::cout << str << std::endl;
	return 0;
}