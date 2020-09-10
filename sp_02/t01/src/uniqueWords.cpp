#include "uniqueWords2.h"

std::multiset<std::string> uniqueWords(std::ifstream &file) {
    std::multiset<std::string> s;
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

void writeToFile(const std::multiset<std::string> &s, const std::string &filename) {
    std::string new_filename = filename;
    size_t pos = filename.find(".");
    pos == std::string::npos ? new_filename.append("_mod") : new_filename.insert(pos, "_mod");
    std::ofstream file(new_filename);

    if (!file.is_open()) {
        std::cerr << "error" << std::endl;
        exit(1);
    }

    for (std::multiset<std::string>::iterator it = s.begin(); it != s.end(); ++it) {
        file << *it << ": " << s.count(*it) << "\n";
        std::advance(it, s.count(*it) - 1);
    }

    file.close();
}
