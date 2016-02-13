#include <iostream>
#include <vector>
#include <new>

using std::cout; using std::cin;
using std::vector; using std::endl;
vector<int>* CreVec();
//采用返回指针方法
//vector<int>* InVec(vector<int> *v);		//需不需要返回值？我觉得需要，因为这是一个函数，虽然当前情况下不修改传入的参数但是不见得以后不修改
//vector<int>* PrintVec(vector<int> *v);
//采用const方法
void InVec(vector<int>* const v);
void PrintVec(vector<int>* const v);
int main() {
	auto v = CreVec();
	InVec(v);
	PrintVec(v);
	delete v;
	v = nullptr;
	return 0;
}
vector<int>* CreVec() {
	return new vector<int>;
}
// vector<int>* InVec(vector<int> *v) {
// 	int i;
// 	while (cin >> i) {
// 		v->push_back(i);
// 	}
// 	return v;
// }
// vector<int>* PrintVec(vector<int> *v) {
// 	for (const auto i : *v) {
// 		cout << i << " ";
// 	}
// 	cout << endl;
// 	return v;
// }
void InVec(vector<int>* const v) {
	int i;
	while (cin >> i) {
		v->push_back(i);
	}
}
void PrintVec(vector<int>* const v) {
	for (const auto i : *v) {
		cout << i << " ";
	}
	cout << endl;
}