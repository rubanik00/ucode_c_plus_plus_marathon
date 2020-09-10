#pragma once


#include <iostream>
#include <algorithm>
#include <iterator>


template<typename Container>
void outputContainer(const Container& container) {
    std::ostream_iterator<typename Container::value_type> out_it (std::cout, "\n");
    for (auto c : container) {
        *out_it = c;
    }
}
