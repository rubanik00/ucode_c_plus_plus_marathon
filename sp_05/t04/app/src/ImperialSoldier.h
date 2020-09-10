#pragma once
#include "Soldier.h"

class ImperialSoldier : public Soldier {
 public:
    ImperialSoldier(std::string &&name, int health);
    ~ImperialSoldier() override;
};
