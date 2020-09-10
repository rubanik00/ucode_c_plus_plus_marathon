#include "MightyWizard.h"

MightyWizard::MightyWizard(std::string& name)
    : m_name(name)
{}

void MightyWizard::checkFood(FoodItem& item)
{
    FoodType incoming = deductFoodType(item);

    if (incoming == FoodType::ApplePie
        || incoming == FoodType::PoisonedFood)
        std::cout << item.GetName() << " Ugh, not again!" << std::endl;
    else
        std::cout << item.GetName() << " Mmm, tasty!" << std::endl;
}

void MightyWizard::checkFood(FoodItem *food) {
    if (food != nullptr)
        checkFood(*food);
    else
        std::cout << "<unknown>. Ugh, not again!" << std::endl;
}

FoodType MightyWizard::deductFoodType(FoodItem& item)
{
    return item.GetType();
}
