#include "Creature.h"

#include <iostream>

Creature::Creature() {
    std::cout << "Creature was created" << std::endl;
}

Creature::~Creature() {
    std::cout << "Creature was deleted" << std::endl;
}
