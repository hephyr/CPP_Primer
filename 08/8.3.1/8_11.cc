#include <iostream>
#include <sstream>
#include <vector>
struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};
int main(int argc, char * argv[]) {
    std::string line, word;
    std::vector<PersonInfo> People;
    while (getline(std::cin, line)) {
        PersonInfo info;
        std::istringstream record(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        People.push_back(info);
    }
    return 0;
}