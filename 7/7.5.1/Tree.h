#ifndef TREE_H
#define TREE_H
#include <string>
class Tree {
public:
	 Tree(std::string s = "") : breed(s) { }
	 Tree(std::string s, unsigned y) : breed(s), age(y) { }
private:
	std::string breed;
	unsigned age;
};
#endif //TREE_H