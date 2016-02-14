#include <iostream>
#include <memory>

using std::endl; using std::cout;
using std::shared_ptr;

void process(shared_ptr<int> ptr) {
	cout << "In process function count = " << ptr.use_count() << endl;
}

int main() {
	auto p = new int();
	auto sp = std::make_shared<int>();
	process(sp);
	//process(new int());
	//process(p);
	process(shared_ptr<int>(p));
	return 0;
}