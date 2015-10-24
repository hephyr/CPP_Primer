#include <iostream>
#include <stdexcept>
#include <vector>
#include "cal.h"
using namespace std;
using PF = int(*) (int, int);

int main() {
    vector<PF> v;
    v.push_back(Add);
    v.push_back(Minus);
    v.push_back(Multiplication);
    v.push_back(Division);
    cout << v[0](1, 2) << endl;
    cout << v[1](10, 11) << endl;
    cout << v[2](3, 9) << endl;
    cout << v[3](6, 3) << endl;
    cout << v[3](6, 0) << endl;
    cout << v[1](12, 6) << endl;    
    return 0;
}