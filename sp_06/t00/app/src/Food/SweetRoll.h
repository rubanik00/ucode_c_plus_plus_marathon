#pragma once

#include "FoodItem.h"

class SweetRoll : public FoodItem {
 public:
    FoodType GetType() override;
    std::string GetName() override;
};
