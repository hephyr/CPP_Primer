#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
int main(int argc, char * argv[]) {
	std::ifstream input(argv[1]);
    if (!input) {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
	std::vector<std::string> v;
	std::string line;
	while (std::getline(input, line)) {
		v.push_back(line);
	}
    for (auto &s : v) {
	    std::istringstream iss(s);
        std::string word;
        while (iss >> word)
            std::cout << word << std::endl;
    }
	return 0;
}