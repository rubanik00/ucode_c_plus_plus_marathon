#include "PoisonedFood.h"

FoodType PoisonedFood::GetType(){
    return FoodType::PoisonedFood;
}

std::string PoisonedFood::GetName(){
    return "Poison.";
}
