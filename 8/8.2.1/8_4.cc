#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using std::vector; using std::string; using std::ifstream; using std::cout; using std::endl;

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        string buf;
        while (std::getline(ifs, buf))
            vec.push_back(buf);
    }
}

int main(int argc, char * argv[])
{
    vector<string> vec;
    ReadFileToVec(argv[1], vec);
    for (const auto &str : vec)
        cout << str << endl;
    return 0;
}
