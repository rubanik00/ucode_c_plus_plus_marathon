#pragma once
#include <iostream>

#include "Weapon.h"

class Soldier {
   public:
    Soldier(std::string&& name, int health);
    virtual ~Soldier();

    void attack(Soldier& other);
    void setWeapon(Weapon* weapon);
    int getHealth() const;

   private:
    Weapon* m_weapon{nullptr};
    std::string m_name;
    int m_health;
};
