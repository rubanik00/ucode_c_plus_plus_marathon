#include "Werewolf.h"

#include <iostream>

Werewolf::Werewolf() : Human() {
    std::cout << "Werewolf was created" << std::endl;
}

Werewolf::~Werewolf() {
    std::cout << "Werewolf was deleted" << std::endl;
}
