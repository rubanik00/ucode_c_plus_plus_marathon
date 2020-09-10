#include <iostream>
#include <string>

#include "templateAddition.h"

int main() {
    double d1 = 3;
    double d2 = 4.3;
    std::cout << add(d1, d2) << std::endl;

    std::string s1 = "Hello";
    std::string s2 = " there";
    std::cout << add(s1, s2) << std::endl;
    return 0;
}
