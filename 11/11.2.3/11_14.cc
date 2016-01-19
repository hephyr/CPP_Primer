#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>

using std::cout; using std::endl;
using std::vector; using std::map;
using std::string; using std::cin;
using std::pair;

int main() {
    map<string, vector<pair<string, string>>> people;
    int i;
    string str, name, birthday;
    while (1) {
        cout << "1.add family" << endl;
        cout << "2.add child" << endl;
        cout << "3.traversal" << endl;
        cout << "4.exit" << endl;
        cin >> i;   
        switch(i) {
            case 1: cout << "Input the family name :";
                    cin >> str;
                    people.insert({str, {}});
                    break;
            case 2: cout << "FAMILY" << endl;
                   for (const auto &family : people) {
                       cout << family.first << endl;
                   }
                   cout << "which family ?" << endl;
                   cin >> str;
                   cout << "Input the child name" << endl;
                   cin >> name;
                   cout << "Input the child's birthday" << endl;
                   cin >> birthday;
                   people[str].push_back({name, birthday});
                   break;
            case 3: for (const auto &family : people) {
                        cout << family.first << endl;
                        for (const auto &child : family.second) {
                            cout << child.first << " " << child.second << endl;
                        }
                        cout << endl;
                    }
                    break;
            case 4: exit(0);
        }
    }
    return 0;
}