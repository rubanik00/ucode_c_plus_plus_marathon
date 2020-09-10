#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
#include <regex>

std::vector<std::string> fileToVector(std::string fname);
void fillLib(std::multimap<std::string, std::string> &lib, std::vector<std::string> &file);
void printLib(const std::multimap<std::string, std::string> &lib);
