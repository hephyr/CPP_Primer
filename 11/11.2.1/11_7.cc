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
        cout << "1.add family" << endl;
        cout << "2.add child" << endl;
        cout << "3.traversal" << endl;
        cout << "4.exit" << endl;
        cin >> i;   
        switch(i) {
            case 1: cout << "Input the family name :";
                    cin >> str;
                    people.insert(std::pair<string, vector<string>> (str, vector<string>{}));
                    break;
            case 2: cout << "FAMILY" << endl;
                   for (const auto &family : people) {
                       cout << family.first << endl;
                   }
                   cout << "which family ?" << endl;
                   cin >> str;
                   cout << "Input the child name" << endl;
                   cin >> name;
                   people[str].push_back(name);
                   break;
            case 3: for (const auto &family : people) {
                        cout << family.first << endl;
                        for (const auto &child : family.second) {
                            cout << child << endl;
                        }
                        cout << endl;
                    }
                    break;
            case 4: exit(0);
        }
    }
    return 0;
}