#include <iostream>
#include <vector>
#include <string>
using namespace std;
//template <typename T>
void printvec(vector<string>::const_iterator first,
              vector<string>::const_iterator last) {
    if (first != last) {
        cout << *first << " ";
        printvec(++first, last);
    }
}
int main() {
    vector<string> str{"hahahha", "heheh", "xixiix", "wuhahahwuha"};
    printvec(str.cbegin(),str.cend());
    cout << endl;
    return 0;
}