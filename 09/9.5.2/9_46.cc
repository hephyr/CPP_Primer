#include <iostream>
#include <string>
using std::string; using std::cout; using std::endl;
string& NameAppend(string &name, const string &pre, const string &su) {
    name.insert(0, pre);
    name.insert(name.size(),su);
    return name;
}
int main() {
    string name("hello");
    cout << NameAppend(name, "Mr.", ", Jr.") << endl;
    return 0;
}