#include <iostream>
#include "StormcloakSoldier.h"
#include "ImperialSoldier.h"
#include "Sword.h"

ImperialSoldier::ImperialSoldier() {
    m_health = 100;
}

ImperialSoldier::~ImperialSoldier() {
    delete m_weapon;
}

int ImperialSoldier::getHealth() const {
    return m_health;
}

void ImperialSoldier::setWeapon(Sword *sword) {
    m_weapon =  sword;
}

void ImperialSoldier::consumeDamage(int amount) {
    m_health -= amount;

    if (m_health > 0) {
        std::cout << "Imperial soldier consumes " << amount << " of damage" << std::endl;
    }
    else {
        std::cout << "Imperial soldier consumes " << amount << " of damage and dies" << std::endl;
    }
}

void ImperialSoldier::attack(StormcloakSoldier& enemy) {
    std::cout << "Imperial soldier attacks and deals " << m_weapon->getDamage() << " damage" << std::endl;
    enemy.consumeDamage(m_weapon->getDamage());
}
