#include <iostream>
using std::endl; using std::cout;
#include <algorithm>
#include <string>
#include <list>
using std::list; using std::string;

int main() {
	list<string> l{"a", "aa", "aaa", "aaaa"};
	cout << count(l.cbegin(), l.cend(), "a") << endl;
	return 0;
}