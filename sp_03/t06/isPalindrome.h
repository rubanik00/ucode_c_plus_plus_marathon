#pragma once

template <class BidirectionalIterator>
bool isPalindrome(BidirectionalIterator begin, BidirectionalIterator end) {
    BidirectionalIterator i = --end;
    for (; begin != i; begin++, end--) {
        if (*begin != *end) {
            return false;
        }
    }
    return true;
}
