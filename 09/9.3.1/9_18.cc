#include <iostream>
#include <deque>
#include <string>
int main() {
    std::string s;
    std::cin >> s;
    std::deque<char> d;
    d.insert(d.begin(), s.cbegin(), s.cend());
    std::deque<char>::const_iterator it = d.cbegin();
    for (; it != d.cend(); ++it)
        std::cout << *it << std::endl;
    return 0;
}