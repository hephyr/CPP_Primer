#include <iostream>
#include <forward_list>
int main() {
    std::forward_list<int> fl {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr % 2)
            curr = fl.erase_after(prev);
        else {
            prev = curr;
            ++curr;
        }
    }
    for (curr = fl.begin(); curr != fl.end(); ++curr)
        std::cout << *curr << std::endl;
    return 0;
}