#include <iostream>
#include <string>
#include "Date.h"
using std::cout;
using std::endl;
int main() {
    Date d1("Jan 1 1900");
    Date d2("1/1/1900");
    Date d3("January 1, 1900");
    d1.print();
    d2.print();
    d3.print();
}