#include <iostream>
#include <string>
#include "Screen.h"
int main() {
	Screen a(20, 20, '*');
	std::cout << a.size() << std::endl;
	return 0;
}