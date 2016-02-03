#include <iostream>
#include <string>
#include <map>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::map;
int main() {
    multimap<string, string> book;
    int a;
    string author, bookname;
    while (1) {
        cout << "1.Add book" << endl;
        cout << "2.Delete" << endl;
        cout << "0.Quit" << endl;
        cin >> a;
        switch(a) {
            case 1:
                cout << "The author name" << endl << ">";
                cin >> author;
                cout << "The book name" << endl << ">";
                cin >> bookname;
                book.insert({author, bookname});
            break;
            case 2:
                cout << endl << "AUTHOR" << endl;
                for (auto it = book.begin(); it != book.end(); ++it) {
                    cout << it->first << endl;
                }
                cout << endl << "wi"
            break;
            case 3:
                exit();
            break;
        }
    }
    return 0;
}