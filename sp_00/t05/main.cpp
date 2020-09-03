#include <iostream>
#include <string>

int main (int argc, char* argv[]) {

    if (argc != 5) {
        std::cerr << "usage:./automaton [name] [level] [health] [stamin]\n";
        exit(1);
    }
    else {    
        auto i = 0;

        try {
            size_t ind;
            auto name = argv[++i];
            auto level = std::stoi(argv[++i], &ind);
            ind != strlen(argv[i]) ? throw "..." : 0;
            auto health = std::stof(argv[++i], &ind);
            ind != strlen(argv[i]) ? throw "..." : 0;
            auto stamina = std::stod(argv[++i], &ind);
            ind != strlen(argv[i]) ? throw "..." : 0;

            std::cout << "Name = " << name << std::endl;
            std::cout << "Level = " << level << std::endl;
            std::cout << "Health = " << health << std::endl;
            std::cout << "Stamina = " << stamina << std::endl;
        } catch (...) {
            std::cerr << "Invalid argument: " << argv[i] << std::endl;
            exit(1);
        }
    }

    return 0;
}
