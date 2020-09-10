#include "stdAlgoV2.h"


std::forward_list<std::string> checkValid(std::forward_list<std::string> list) {
    list.remove_if([](const std::string &s) {
        return s.find('c') != std::string::npos || s.find('b') != std::string::npos 
               || s.find('l') != std::string::npos;
    });

    std::replace_if(list.begin(), list.end(), [](const std::string &s) {
        return s.length() > 10;
    }, "Long one");

    std::replace_if(list.begin(), list.end(), [](const std::string &s) {
        return s.length() < 4;
    }, "Short one");

    list.unique();
    list.sort();
    list.reverse();

    return list;
}

void writeToFile(const std::forward_list<std::string> &list, const std::string &filename) {
    std::string new_filename = filename;
    new_filename.insert(filename.find("."), "_mod");
    std::ofstream file(new_filename);

    if (!file.is_open()) {
        std::cerr << "error" << std::endl;
        exit(1);
    }

    for (auto l : list) {
        file << l << "\n";
    }

    file.close();
}
