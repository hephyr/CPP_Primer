#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;
int main() {
    Sales_data total;
    if (cin >> total.bookNo 
     && cin >> total.units_sold 
     && cin >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.bookNo
            && cin >> trans.units_sold
            && cin >> trans.revenue) {
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                cout << total.bookNo << " "
                     << total.units_sold << " "
                     << total.revenue << endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout << total.bookNo << " "
             << total.units_sold << " "
             << total.revenue << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}