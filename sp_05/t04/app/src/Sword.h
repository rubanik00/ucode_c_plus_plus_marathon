#pragma once
#include "Weapon.h"

class Sword : public Weapon {
public:
    Sword(int damage);
    ~Sword() = default;
};
