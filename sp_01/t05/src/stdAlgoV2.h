#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <forward_list>

std::forward_list<std::string> checkValid(std::forward_list<std::string> list);
void writeToFile(const std::forward_list<std::string> &list, const std::string &filename);
