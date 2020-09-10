#include "StormcloakSoldier.h"
#include "ImperialSoldier.h"
#include "Sword.h"
#include "Axe.h"
#include <iostream>
#include <string>

template <typename T>
bool IsInRange(const T& val, const T& from, const T& to) {
    return from <= val && val <= to;
}

template <typename T>
bool IsInRange(const T& val, const std::pair<const T&, const T&>& minmax) {
    return minmax.first <= val && val <= minmax.second;
}

int getWeaponDmg(std::string&& arg) {
    size_t idx;
    int weaponDmg = stoi(arg, &idx);

    if (!IsInRange(weaponDmg, 10, 20) || arg[idx] != '\0')
        throw false;
    return weaponDmg;
}

int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]" << std::endl;
        exit(1);
    }

    try {
        Sword *sword = new Sword(getWeaponDmg(std::string(argv[1])));
        Axe *axe = new Axe(getWeaponDmg(std::string(argv[2])));
        ImperialSoldier imperial;
        StormcloakSoldier stormcloak;

        imperial.setWeapon(sword);
        stormcloak.setWeapon(axe);

        while(imperial.getHealth() > 0 && stormcloak.getHealth() > 0) {
            imperial.attack(stormcloak);
            stormcloak.attack(imperial);

            std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;

            if (stormcloak.getHealth() <= 0) {
                std::cout << "Imperial has won!" << std::endl;
                return 1;
            }
            if (imperial.getHealth() <= 0) {
                std::cout << "Stormcloack has won!" << std::endl;
                return 1;
            }
        }
    }
    catch(...) {
        std::cerr << "Damage has to be in a range of 10-20 points." << std::endl;
        exit(1);
    }

    return 0;
}
