#pragma once


#include <iostream>

template <class Container>
void squareValue(Container& container) {
    for (auto &c : container) {
        c *= c;
    }
}
