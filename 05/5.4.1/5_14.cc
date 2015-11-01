#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, prestr;
    unsigned cnt = 0, maxcnt = 0;
    string maxstr;
    while (cin >> str) {
        if (str == prestr) { 
            ++cnt;
            if (cnt > maxcnt) {
                maxcnt = cnt;
                maxstr = str;
            }
        } else if (maxcnt == 0) {
            maxstr = prestr = str;
            cnt = maxcnt = 1;
        } else {
            cnt = 1;
            prestr = str;
        }
    }
    cout << maxstr << ": " << maxcnt << endl;
    return 0;
}