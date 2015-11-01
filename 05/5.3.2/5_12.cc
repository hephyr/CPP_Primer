#include <iostream>
using std::cout; using std::cin; using std::endl;
int main() {
    char ch;
    char prech = '\0';
    unsigned ffcnt = 0, flcnt = 0, ficnt = 0;
    // while (cin >> ch) {
    //     switch (ch) {
    //         case 'f':
    //             cin >> ch;
    //             switch(ch) {
    //                 case 'f': ++ffcnt; break;
    //                 case 'l': ++flcnt; break;
    //                 case 'i': ++ficnt; break;
    //             }
    //         default:
    //             break;
    //     }
    // }
    while (cin >> ch){
        switch (ch) {
            case 'f':
                if (prech == 'f')
                    ++ffcnt;
                break;
            case 'l':
                if (prech == 'f')
                    ++flcnt;
                break;
            case 'i':
                if (prech == 'f')
                    ++ficnt;
                break;
        }
        prech = ch;
    }
    cout << "Number of \'ff\': " << ffcnt << endl;
    cout << "Number of \'fl\': " << flcnt << endl;
    cout << "Number of \'fi\': " << ficnt << endl;
    return 0;
}