#include <iostream>
#include <string>
#include <vector>

#include "squareValue.h"

int main() {
    std::vector<int> v3(10, 5);
    squareValue(v3);

    for (auto c : v3) {
        std::cout << c << std::endl;
    }
}