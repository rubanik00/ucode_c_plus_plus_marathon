#pragma once

#include "FoodItem.h"

class ApplePie : public FoodItem {
 public:
    FoodType GetType() override;
    std::string GetName() override;
};
