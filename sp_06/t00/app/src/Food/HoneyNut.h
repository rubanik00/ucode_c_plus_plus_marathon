#pragma once

#include "FoodItem.h"

class HoneyNut : public FoodItem {
 public:
    FoodType GetType() override;
    std::string GetName() override;
};
