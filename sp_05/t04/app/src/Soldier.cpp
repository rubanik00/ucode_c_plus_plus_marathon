#include "Soldier.h"

#include <iostream>

Soldier::Soldier(std::string&& name, int health)
    : m_name(std::move(name)), m_health(health) {
    std::cout << "Soldier " << m_name << " was created\n";
}

Soldier::~Soldier() {
    delete m_weapon;
    std::cout << "Soldier " << m_name << " was deleted\n";
}

void Soldier::setWeapon(Weapon* weapon) {
    m_weapon = weapon;
}

int Soldier::getHealth() const {
    return m_health;
}

void Soldier::attack(Soldier& other) {
    other.m_health -= m_weapon->getDamage();
    std::cout << m_name << " attacks "
              << other.m_name << " and deals "
              << m_weapon->getDamage() << " damage\n";
}
