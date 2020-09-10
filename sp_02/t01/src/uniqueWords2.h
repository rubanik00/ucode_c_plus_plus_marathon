#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <forward_list>
#include <set>
#include <iterator>

void writeToFile(const std::multiset<std::string> &set, const std::string &filename);
std::multiset<std::string> uniqueWords(std::ifstream &file);
