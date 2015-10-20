#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
	std::string str1, str2;
	str1 = argv[1];
	str2 = argv[2];
	str1 += str2;
	std::cout << str1 << std::endl;
	return 0;
}