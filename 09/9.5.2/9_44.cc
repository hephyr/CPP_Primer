#include <iostream>
#include <string>
using std::string; using std::cout; using std::endl;

string& Replace(string &s, const string &oldVal, const string &newVal) {
    for (size_t pos = 0; pos <= s.size(); ++pos)
        if (s[pos] == oldVal[0] && s.substr(pos, oldVal.size()) == oldVal)//   666
            s.replace(pos, oldVal.size(), newVal);
    return s;
}
int main() {
    string s{ "To drive straight thru is a foolish, tho courageous act." };
    Replace(s, "tho", "though");
    cout << s << endl;
    Replace(s, "thru", "through");
    cout << s << endl;
    return 0;
}