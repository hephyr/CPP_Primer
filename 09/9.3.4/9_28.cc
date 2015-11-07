#include <iostream>
#include <forward_list>
#include <string>
int main() {
    std::forward_list<std::string> flst{"Hello", "World"};
    std::string s1 = "Hello", s2 = "bye", s3 = "hello";
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
        if (s3 == *curr) {
            flst.insert_after(curr, s2);
            break;
        }
        else {
            prev = curr;
            ++curr;
        }
    if (curr == flst.end())
        flst.insert_after(prev, s2);
    for (curr = flst.begin(); curr != flst.end(); ++curr)
        std::cout << *curr << std::endl;
    return 0;
}