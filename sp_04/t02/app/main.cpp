#include "dragonborn.h"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "usage: ./dragonborn [action]\n";
        exit(1);
    }

    Dragonborn dragon;
    std::map<std::string, Dragonborn::Actions> exe = {
        {"shout", Dragonborn::Actions::Shout},
        {"magic", Dragonborn::Actions::Magic},
        {"weapon", Dragonborn::Actions::Weapon}
    };

    try {
        exe.at(argv[1]);
        dragon.executeAction(exe[argv[1]]);
    } catch (...) {
        std::cerr << "Invalid action\n";
        exit(1);
    }
}
