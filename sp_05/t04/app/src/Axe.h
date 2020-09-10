#pragma once
#include "Weapon.h"

class Axe : public Weapon {
public:
    Axe(int damage);
    ~Axe() = default;
};
