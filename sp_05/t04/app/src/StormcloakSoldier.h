#pragma once

#include "Soldier.h"

class StormcloakSoldier : public Soldier {
 public:
    StormcloakSoldier(std::string &&name, int health);
    ~StormcloakSoldier() override;
};
