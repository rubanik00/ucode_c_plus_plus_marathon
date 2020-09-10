#include "draugr.h"

int main (int argc, char **argv) {
    try {
        if (argc != 2) {
            throw std::runtime_error("usage: ./draugr [shoutNumber]");
        }

        int shoutNumber = std::stoi(argv[1]);
        Draugr draugr;

        draugr.shoutPhrase(shoutNumber);

    }
    catch (std::runtime_error& error) {
        std::cerr << error.what() << std::endl;
    }

    return 0;
}
