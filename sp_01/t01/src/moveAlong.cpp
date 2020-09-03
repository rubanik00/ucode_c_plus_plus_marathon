#include "moveAlong.h"


void moveAlong(const std::vector<std::string> args) {
    std::vector<std::string> reservedNames { "mercer", "emer", "jim" };

    for (auto arg : args) {
        auto tmp = arg;

        std::transform(tmp.begin(), tmp.end(), tmp.begin(),
                       [](unsigned char c) { return std::tolower(c); });
        
        for (auto res_name : reservedNames) {
            if (tmp.find(res_name) != std::string::npos) {
                std::cout << arg << ", move along!\n";
                break;
            }
        }
    }
}
