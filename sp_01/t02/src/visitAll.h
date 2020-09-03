#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

struct Town {
    std::string name;
    int stamina;
    int distance;
    int index;
};

Town *getArguments(const std::string &str, int index);
void visitAll(std::deque<Town *> towns);
