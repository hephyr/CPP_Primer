#include <iostream>
#include <stack>
#include <string>
using std::string; using std::stack; using std::cout; using std::endl;
int main() {
	string val("(1+1+1+1+1+1)");
	stack<char> sta;
	for(auto ch : val) {
		if (sta.empty() && ch != '(')
			continue;
		if (ch == ')') {
			
		}
	}
	return 0;
}