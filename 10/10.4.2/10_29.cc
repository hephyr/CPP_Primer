#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>

using std::cout; using std::endl;
using std::string; using std::vector;
int main() {
    std::ifstream ifs("book.txt");
    std::istream_iterator<string> in(ifs), eof;
    std::vector<string> vec;
    std::copy(in, eof, back_inserter(vec));
    std::copy(vec.cbegin(), vec.cend(),
              std::ostream_iterator<string>(cout, "\n"));
    return 0;
}