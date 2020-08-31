#include <iostream>
#include <string>

int main (int argc, char* argv[]) {

    if (argc != 5)
        std::cerr << "usage:./automaton [name] [level] [health] [stamin]\n";
    else {    
        auto num = 2;

        try {
            std::string::size_type sz;
            auto level = std::stoi(argv[2], &sz);
            num++;
            auto health = std::stof(argv[3], &sz);
            num++;
            auto stamina = std::stod(argv[4], &sz);

            std::cout << "Name = " << argv[1] << std::endl;
            std::cout << "Level = " << level << std::endl;
            std::cout << "Health = " << health << std::endl;
            std::cout << "Stamina = " << stamina << std::endl;

        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Invalid argument: " << argv[num] << std::endl;
        }
    }

    return 0;
}