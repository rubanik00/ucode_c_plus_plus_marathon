#include "tesLibrary.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage: ./tesLibrary [file_name]" << std::endl;
        exit(1);
    }

    std::vector<std::string> file = fileToVector(argv[1]);
    std::multimap<std::string, std::string> lib;
    fillLib(lib, file);
    printLib(lib);
    
    return 0;
}
