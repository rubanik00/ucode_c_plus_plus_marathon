#pragma once

#include "AbstractWizard.h"
#include "../Food/FoodItem.h"

class MightyWizard : protected AbstractWizard {
 public:
    MightyWizard(std::string& name);
    void checkFood(FoodItem& item);
    void checkFood(FoodItem* item);
 protected:
    FoodType deductFoodType(FoodItem& item);
 private:
    std::string m_name;
};
