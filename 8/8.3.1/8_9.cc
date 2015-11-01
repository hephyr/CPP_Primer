#include <iostream>
#include <sstream>
#include <string>
using std::istream;

std::istringstream &func(std::istringstream &is) {
    std::string buf;
    while (is >> buf)
        std::cout << buf << std::endl;
    is.clear();
    return is;
}

int main() {
	std::istringstream iss("HelloWorld");
    istream &is = func(iss);
    return 0;
}