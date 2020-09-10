#pragma once

#include <iterator>

template <class RandomAccessIterator>
RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end) {
    for (RandomAccessIterator it1 = begin; it1 != end; it1++) {
        for (RandomAccessIterator it2 = begin; it2 < it1; it2++) {
            if (*it2 > *it1) {
                std::iter_swap(it1, it2);
            }
        }
    }
    return begin;
}
