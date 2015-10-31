#include <fstream>
#include <iostream>
#include <string>
#include "Sales_data.h"
int main(int argv, char * argc[]) {
    Sales_data total;
    std::ifstream in(argc[1]);
    std::ofstream out(argc[2], std::ofstream::out | std::ofstream::app);
    if (read(in, total)) {
        Sales_data trans;
        while (read(in, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(out, total) << std::endl;
                total = trans;
            }
        }
        print(out, total) << std::endl;
    } else
        std::cerr << "No data?!" << std::endl;
    return 0;
}