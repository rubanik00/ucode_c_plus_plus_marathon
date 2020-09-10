#pragma once

#include "FoodItem.h"

class PoisonedFood : public FoodItem {
 public:
    FoodType GetType() override;
    std::string GetName() override;
};
