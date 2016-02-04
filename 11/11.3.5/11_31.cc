#include <iostream>
#include <string>
#include <map>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::multimap;
int main() {
    multimap<string, string> book;
    int a;
    string author, bookname;
    while (1) {
        cout << "1.Add book" << endl;
        cout << "2.Delete" << endl;
        cout << "0.Quit" << endl;
        cout << ">";
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
                cout << endl << "LIST" << endl;
                for (auto it = book.begin(); it != book.end(); ++it) {
                    cout << "author : " << it->first ;
                    cout << "  book : " << it->second << endl;
                }
                cout << endl << "witch author?" << endl << ">";
                cin >> author;
                cout << endl << "which book?" << endl << ">";
                cin >> bookname;
                for (auto pos = book.equal_range(author); pos.first != pos.second; ++pos.first) {
                    if (pos.first->second == bookname) {
                        book.erase(pos.first);
                    }
                }
                
            break;
            case 3:
                exit(0);
            break;
        }
    }
    return 0;
}