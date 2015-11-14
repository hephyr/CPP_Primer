#include <iostream>
#include <string>
using std::string; using std::cout; using std::endl;
int main() {
    string num("0123456789");
    string word("qwertyuiopasdfghjklzxcvbnm");
    string s("ab2c3d7R4E6");
    for (int pos = 0; (pos = s.find_first_of(num, pos)) != string::npos; ++pos)
        cout << s[pos] << " ";
    cout << endl;
    for (int pos = 0; (pos = s.find_first_of(word, pos)) != string::npos; ++pos)
        cout << s[pos] << " ";
    cout << endl;
    return 0;
}