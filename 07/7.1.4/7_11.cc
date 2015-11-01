#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;
int main() {
    Sales_data a;
    Sales_data b("King");
    Sales_data c("King", 10, 30);
    Sales_data d(cin);
    print(cout, a) << endl;
    print(cout, b) << endl;
    print(cout, c) << endl;
    print(cout, d) << endl;
    return 0;
}