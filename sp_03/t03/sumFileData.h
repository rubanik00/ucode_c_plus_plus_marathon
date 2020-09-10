#pragma once

#include <iostream>
#include <iterator>

template <class T>
T sumFileData(const std::string& fileName) {
    std::ifstream file(fileName);
    T sum = 0;

    if (file.is_open()) {
        std::istream_iterator<T> iterator(fileName);
        std::istream_iterator<T> eos;

        while(file != eos) {
            sum += *iterator;
            iterator++;            
        }
    }

    return sum;
}
