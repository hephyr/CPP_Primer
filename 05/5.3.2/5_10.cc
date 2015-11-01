#include <iostream>
using namespace std;
int main() {
    char ch;
    int acnt, ecnt, icnt, ocnt, ucnt;
    acnt = ecnt = icnt = ocnt = ucnt = 0;
    while (cin >> ch) {
        switch (ch) {
            case 'A':
            case 'a':
                ++acnt; break;
            case 'E':
            case 'e':
                ++ecnt; break;
            case 'I':
            case 'i':
                ++icnt; break;
            case 'O':
            case 'o':
                ++ocnt; break;
            case 'U':
            case 'u':
                ++ucnt; break;
        }
    }
    cout << "Number of vowel A & a: " << acnt << endl;
    cout << "Number of vowel E & e: " << ecnt << endl;
    cout << "Number of vowel I & i: " << icnt << endl;
    cout << "Number of vowel O & o: " << ocnt << endl;
    cout << "Number of vowel U & u: " << ucnt << endl;
    return 0;
}