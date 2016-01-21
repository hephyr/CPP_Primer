#include <iostream>
#include <string>
#include <map>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::map;
using std::string; using std::cin;

int main() {
    map<string, vector<string>> people;
    int i;
    string str, name;
    while (1) {
        cout << "1.add child" << endl;
        cout << "2.traversal" << endl;
        cout << "3.exit" << endl;
        cin >> i;   
        switch(i) {
            case 1:cout << "which family ?" << endl;
                   cout << "Input the child name" << endl;
                   cin >> name;
                   cin >> str;
                   people[str].push_back(name);
                   break;
            case 2: for (const auto &family : people) {
                        cout << family.first << endl;
                        for (const auto &child : family.second) {
                            cout << child << endl;
                        }
                        cout << endl;
                    }
                    break;
            case 3: exit(0);
        }
    }
    return 0;
}