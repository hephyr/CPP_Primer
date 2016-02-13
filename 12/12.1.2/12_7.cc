#include <iostream>
#include <memory>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::vector;
using std::shared_ptr;

shared_ptr<vector<int>> make_vec();
void in_vec(const shared_ptr<vector<int>> v);
void print_vec(const shared_ptr<vector<int>> v);
int main() {
	auto v = make_vec();
	in_vec(v);
	print_vec(v);
	return 0;
}

shared_ptr<vector<int>> make_vec() {
	return std::make_shared<vector<int>>();
}
void in_vec(const shared_ptr<vector<int>> v) {
	int i;
	while (cin >> i) {
		v->push_back(i);
	}
}
void print_vec(const shared_ptr<vector<int>> v) {
	for (auto it = v->cbegin(); it != v->cend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}
