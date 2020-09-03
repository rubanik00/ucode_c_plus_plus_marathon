#include "visitAll.h"

Town *getArguments(const std::string &str, int index) {
    std::string town = str;
    std::string name = town.substr(0, town.find(","));
    town.erase(0, town.find(',') + 1);
    std::string stamina = town.substr(0, town.find(","));
    town.erase(0, town.find(',') + 1);
    std::string distance = town;
    Town *t = new Town;

    for (auto c : name) {
        if (!isalpha(c) && !isspace(c)) {
            std::cerr << "Argument " << str << " is not valid" << std::endl;
            exit(1);
        }
    }
    for (auto c : stamina) {
        if (!isdigit(c)) {
            std::cerr << "Argument " << str << " is not valid" << std::endl;
            exit(1);
        }
    }
    for (auto c : distance) {
        if (!isdigit(c)) {
            std::cerr << "Argument " << str << " is not valid" << std::endl;
            exit(1);
        }
    }
    try {
        size_t ind;
        t->name = name;
        t->stamina = std::stoi(stamina, &ind);
        ind != stamina.length() ? throw "..." : 0;
        t->distance = std::stoi(distance, &ind);
        ind != distance.length() ? throw "..." : 0;
        t->index = index;

    }
    catch(...) {
        std::cerr << "Argument " << str << " is not valid" << std::endl;
        exit(1);
    }
    return t;
}

bool getPath(std::deque<Town *> towns) {
    int stamina = 0;
    
    for (auto t : towns) {
        stamina += t->stamina - t->distance;
        if (stamina < 0) {
            return false;
        }
    }
    
    for (auto t : towns)
        std::cout << t->index << ". " << t->name << std::endl;
    
    return true;
}

void visitAll(std::deque<Town *> towns) {
    for (auto t : towns) {
        if ((t->stamina - t->distance) >= 0) {
            if (getPath(towns)) {
                return;
            }
        }
        else {
            towns.push_back(t);
            towns.pop_front();
        }
    }

    std::cerr << "Mission: Impossible" << std::endl;
}
