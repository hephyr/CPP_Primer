#include <iostream>
using std::cin; using std::cout; using std::endl;
int main() {
    char ch;
    unsigned vowelCnt = 0;
    unsigned dCnt = 0;
    while (cin >> std::noskipws >> ch) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowelCnt;
                break;
            case ' ': case '\t': case '\n':
                ++dCnt;
                break;
        }
    }
    cout << "Numble of vowels : " << vowelCnt << endl;
    cout << "Numble of space : " << dCnt << endl;
    return 0;
}