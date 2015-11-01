#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
struct Person {
    Person() = default;
    Person(const string &s) : name(s) { }
    Person(const string &s, const string &as) :
           name(s), address(as) { }
    std::string PrintName() const {return name;}
    std::string PrintAddress() const {return address;}
    std::string name;
    std::string address;
};
std::istream& read(std::istream& is, Person pon) {
    is >> pon.name >> pon.address;
    return is;
}
std::ostream& print(std::ostream& os, Person pon) {
    os << "Name: " << pon.name << std::endl
       << "Address: " << pon.address;
}
#endif //PERSON_H