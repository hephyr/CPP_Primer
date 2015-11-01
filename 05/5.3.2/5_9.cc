#include <iostream>
using namespace std;
int main() {
    char ch;
    unsigned vowelCnt = 0;
    while (cin >> ch) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowelCnt;
        }
    }
    cout << "Numble of vowels : " << vowelCnt << endl;
    return 0;
}