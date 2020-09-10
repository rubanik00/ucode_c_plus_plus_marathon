#include <iostream>
#include "src/StormcloakSoldier.h"
#include "src/ImperialSoldier.h"
#include "src/Axe.h"
#include "src/Sword.h"

static int strToInt(std::string s) {
    try {
        size_t ind;
        int res = std::stoi(std::string(s), &ind);
        if (s[ind] != '\0' || res > 20 || res < 10)
            throw false;
        return res;
    }
    catch (...) {
        std::cerr << "Damage has to be in a range of 10-20 points.\n";
        exit(EXIT_FAILURE);
    }
}
static void fight(ImperialSoldier &is, StormcloakSoldier &ss) {
    std::cout << "\n***The battle has begun!***\n\n";
    while (is.getHealth() > 0 && ss.getHealth() > 0) {
        if (ss.getHealth() > 0)
            ss.attack(is);
        if (is.getHealth() > 0)
            is.attack(ss);
        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    }
}
static void whoIsWon(ImperialSoldier &is, StormcloakSoldier &ss) {
    if (is.getHealth() > 0)
        std::cout << "Imperial has won!\n\n";
    else
        std::cout << "Stormcloak has won!\n\n";
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]\n";
        return 1;
    }
    auto *sword = new Sword(strToInt(argv[1]));
    auto *axe = new Axe(strToInt(argv[2]));

    ImperialSoldier is("Martin", 100);
    StormcloakSoldier ss("Flynn", 100);

    is.setWeapon(sword);
    ss.setWeapon(axe);

    fight(is, ss);
    whoIsWon(is, ss);

    return 0;
}
