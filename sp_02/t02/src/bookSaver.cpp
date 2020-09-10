#include "bookSaver.h"

void printList(std::map<std::string, std::vector<std::string>> &lib) {
    for (auto [name, text] : lib) {
        std::cout << name << std::endl;
    }
}

void addLib(std::map<std::string, std::vector<std::string>> &lib, std::string name) {
    std::ifstream file("./library/" + name);
    
    if (!file.is_open()) {
        std::cerr << "invalid book" << std::endl;
        return;
    }

    std::string tmp;
    lib[name].clear();

    while (std::getline(file, tmp)) {
        lib[name].push_back(tmp);
    }

    file.close();
    std::cout << name << " added" << std::endl;
}

void deleteLib(std::map<std::string, std::vector<std::string>> &lib, std::string name) {
    if (lib.find(name) != lib.end()) {
        lib.erase(name);
        std::cout << name << " deleted" << std::endl;
    }
    else {
        std::cerr << "invalid book" << std::endl;
    }
}

void readLib(std::map<std::string, std::vector<std::string>> &lib, std::string name) {
    for (auto s : lib[name]) {
        std::cout << s << std::endl;
    }
}

void mainLoop(std::map<std::string, std::vector<std::string>> &lib) {
    std::string input;

    while (1) {
        std::cout << "enter a command:> ";
        std::getline(std::cin, input);
        std::istringstream stream(input);
        std::vector<std::string> results((std::istream_iterator<std::string>(stream)),
                                          std::istream_iterator<std::string>());

        if (results.size() == 1) {
            if(results[0] == "list") {
                printList(lib);
            }
            else if (results[0] == "quit") {
                std::cout << "bye" << std::endl;
                return;
            }
            else {
                std::cerr << "invalid command" << std::endl;
            }
        }
        else if (results.size() == 2) {
            if (results[0] == "add") {
                addLib(lib, results[1]);
            }
            else if (results[0] == "delete") {
                deleteLib(lib, results[1]);
            } 
            else if (results[0] == "read") {
                readLib(lib, results[1]);
            }
            else {
                std::cerr << "invalid command" << std::endl;
                continue;
            }
        }
        else {
            std::cerr << "invalid command" << std::endl;
            continue;
        }

    }
    
}
