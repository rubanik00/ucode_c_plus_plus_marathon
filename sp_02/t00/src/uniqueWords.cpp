#include "uniqueWords.h"

std::set<std::string> uniqueWords(std::ifstream &file) {
    std::set<std::string> s;
    std::string tmp;

    while (file >> tmp) {
        auto pos = std::find_if(tmp.begin(), tmp.end(), [](char c) {
            return (!isalnum(c) && c != '\'' && c != '-');
        });

        if (pos == tmp.end() - 1) {
            tmp.pop_back();
        }
        s.insert(tmp);
    }

    return s;
}

void writeToFile(const std::set<std::string> &s, const std::string &filename) {
    std::string new_filename = filename;
    size_t pos = filename.find(".");
    pos == std::string::npos ? new_filename.append("_mod") : new_filename.insert(pos, "_mod");
    std::ofstream file(new_filename);

    if (!file.is_open()) {
        std::cerr << "error" << std::endl;
        exit(1);
    }

    for (auto l : s) {
        file << l << "\n";
    }

    file.close();
}
