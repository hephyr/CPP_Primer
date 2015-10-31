#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data;
Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
std::istream& read(std::istream &is, Sales_data &item);
std::ostream& print(std::ostream &os, const Sales_data &item);

class Sales_data {
    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
    friend std::istream& read(std::istream &is, Sales_data &item);
    friend std::ostream& print(std::ostream &os, const Sales_data &item);
public:
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double p) :
               bookNo(s), units_sold(n), revenue(p) { }
    Sales_data(std::istream &is) {read(std::cin, *this);}
    std::string isbn() const {return bookNo;};
    Sales_data& combine(const Sales_data& rhs);
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
std::istream& read(std::istream &is, Sales_data &item) {
    is >> item.bookNo >> item.units_sold >> item.revenue;
    return is;
}
std::ostream& print(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " "
       << item.units_sold << " "
       << item.revenue;
       return os;
}
#endif //SALES_DATA_H