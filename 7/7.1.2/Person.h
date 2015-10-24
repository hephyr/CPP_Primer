#ifndef PERSON_H
#define PERSON_H
#include <string>
struct Person {
    std::string PrintName() const {return name;}
    std::string PrintAddress() const {return address;}
    std::string name;
    std::string address;
};
#endif //PERSON_H