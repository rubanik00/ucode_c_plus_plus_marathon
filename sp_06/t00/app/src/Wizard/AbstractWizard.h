#pragma once

#include <iostream>
#include <string>

#include "../Food/FoodItem.h"

class AbstractWizard {
 protected:
    virtual FoodType deductFoodType(FoodItem& item) = 0;
};
