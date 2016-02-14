#include <iostream>
#include <memory>

using std::endl; using std::cout;
using std::shared_ptr;

void process(shared_ptr<int> ptr) {
	cout << "In process function count = " << ptr.use_count() << endl;
}

int main() {
	shared_ptr<int> p(new int(42));
	cout << "Before process count = " << p.use_count() << endl;
	process(shared_ptr<int>(p.get()));					// = 1
	cout << "After process count = " << p.use_count() << endl;
	return 0;
}				//被两次delete
				//get函数得到的是块地址