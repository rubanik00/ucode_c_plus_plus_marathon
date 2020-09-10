#include "draugr.h"


void checkValid(int shoutNumber) {
    if (shoutNumber < 0 || shoutNumber > 8) {
        std::cerr << "Invalid shoutNumber" << std::endl;
        exit(1);
    }
}

void one_argc(char **argv) {
    try {
        int shoutNumber = std::stoi(argv[1]);
        
        checkValid(shoutNumber);
        
        Draugr draugr;
        draugr.shoutPhrase(shoutNumber);
    }
    catch(std::runtime_error& error) {
       std::cerr << "Error" << std::endl; 
    }
    catch (std::out_of_range& error) {
        std::cerr << "Error" << std::endl; 
    }
}

void two_argc(char **argv) {
    try {
        int shoutNumber = std::stoi(argv[1]);
        double val = std::stod(argv[2]);
        
        checkValid(shoutNumber);
        
        Draugr draugr1(val, 50);
        draugr1.shoutPhrase(shoutNumber);
        Draugr draugr2(val);
        draugr2.shoutPhrase(shoutNumber);

    }
    catch(std::runtime_error& error) {
       std::cerr << "Error" << std::endl; 
    }
    catch (std::out_of_range& error) {
        std::cerr << "Error" << std::endl; 
    }
}


void three_argc(char **argv) {
    try {
        int shoutNumber = std::stoi(argv[1]);
        double val = std::stod(argv[2]);
        int frostResist = std::stoi(argv[3]);
        
        checkValid(shoutNumber);
        
        Draugr draugr(val, frostResist);

        draugr.shoutPhrase(shoutNumber);
    }
    catch(std::runtime_error& error) {
       std::cerr << "Error" << std::endl; 
    }
    catch (std::out_of_range& error) {
        std::cerr << "Error" << std::endl; 
    }
}

int main (int argc, char **argv) {
    try {
        if (argc < 2 || argc > 4) {
            throw std::runtime_error("usage: ./draugr [shoutNumber] [health] [frostResist]");
        }

        if (argc == 2) {
            one_argc(argv);
        }
        else if (argc == 3) {
            two_argc(argv);
        }
        else if (argc == 4) {
            three_argc(argv);
        }
    }
    catch (std::runtime_error& error) {
        std::cerr << error.what() << std::endl;
    }

    return 0;
}
