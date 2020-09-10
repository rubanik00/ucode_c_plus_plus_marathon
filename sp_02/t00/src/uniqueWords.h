#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <forward_list>
#include <set>

void writeToFile(const std::set<std::string> &set, const std::string &filename);
std::set<std::string> uniqueWords(std::ifstream &file);
