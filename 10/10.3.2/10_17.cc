#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Sales_data.h"
using std::cout; using std::endl;
using std::vector; using std::string;
using std::stable_sort;
int main() {
    vector<Sales_data> v;
    Sales_data s1("King"), s2("Inside"), s3("Out");
    v.assign({s1, s2, s3});
    stable_sort(v.begin(), v.end(),
    			[](const Sales_data &s1, const Sales_data &s2)
    			{ return s1.isbn().size() < s2.isbn().size(); });
    for (const auto &s : v) {
        cout << s.isbn() << endl;
    }
    return 0;
}