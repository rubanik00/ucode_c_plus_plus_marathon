#include <iostream>
#include "StormcloakSoldier.h"
#include "ImperialSoldier.h"
#include "Axe.h"

StormcloakSoldier::StormcloakSoldier() {
    m_health = 100;
}

StormcloakSoldier::~StormcloakSoldier() {
    delete m_weapon;
}

int StormcloakSoldier::getHealth() const {
    return m_health;
}

void StormcloakSoldier::setWeapon(Axe *exe) {
    m_weapon = exe;
}

void StormcloakSoldier::consumeDamage(int amount) {
    m_health -= amount;

    if (m_health > 0) {
        std::cout << "Stormcloak soldier consumes " << amount << " of damage" << std::endl;
    }
    else {
        std::cout << "Stormcloak soldier consumes " << amount << " of damage and dies" << std::endl;
    }
}

void StormcloakSoldier::attack(ImperialSoldier &enemy) {
    std::cout << "Stormcloak soldier attacks and deals " << m_weapon->getDamage() << " damage" << std::endl;
    enemy.consumeDamage(m_weapon->getDamage());
}
