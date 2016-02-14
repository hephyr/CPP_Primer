#include <iostream>
#include <memory>

using std::cout; using std::endl;
using std::shared_ptr;
void process(shared_ptr<int> ptr) {
	cout << "In process function. ptr.use_count = " << ptr.use_count() << endl;
}

int main() {
	shared_ptr<int> ptr(new int(42));
	cout << "count = " << ptr.use_count() << endl;
	process(shared_ptr<int>(ptr));
	cout << "after process count = " << ptr.use_count() << endl;
	auto q = ptr;
	cout << "after q count = " << ptr.use_count() << endl;
	return 0;
}