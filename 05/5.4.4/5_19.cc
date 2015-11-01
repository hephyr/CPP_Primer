#include <iostream>
#include <string>
using namespace std;
int main() {
    string rsp;
    do {
        string str1, str2;
        cout << "Input the first string" << endl;
        cin >> str1;
        cout << "Input the second string" << endl;
        cin >> str2;
        cout << "The shorter string is:" << endl;
        cout << ((str1.size() < str2.size()) ? str1 : str2) << endl;
        cout << "More? Enter yes or no" << endl;
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');
    return 0;
}