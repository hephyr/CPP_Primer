#include <iostream>
#include <string>
#include <fstream>
#include <stringstream>
#include <vector>
int main(int argc, char * argv[]) {
	std::ifstream input(argv[1]);
	std::vector<string> v;
	std::string line;
	while (std::getline(input, line)) {
		v.push_back(line);
	}
	std::istringstream 
	return 0;
}