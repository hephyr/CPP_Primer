#include <iostream>
#include <string>
#include "Sales_data.h"
int main() {
	Sales_data a1;
	Sales_data a2("hahaha");
	Sales_data a3("hehehe", 10, 30);
	Sales_data a4(std::cin);
	return 0;
}