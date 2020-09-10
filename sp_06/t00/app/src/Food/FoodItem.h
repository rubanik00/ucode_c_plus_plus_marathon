#pragma once

#include <iostream>
#include <string>

#include "FoodType.h"

class FoodItem {
 public:
    virtual ~FoodItem() = default;
    virtual FoodType GetType() = 0;
    virtual std::string GetName() = 0;
};
