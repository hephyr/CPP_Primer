#include <string>
#include <cctype>
#include "hasupper.h"
bool hasupper(const std::string &str) {
    for (auto c : str)
        if (isupper(c))
            return true;
    return false;
}