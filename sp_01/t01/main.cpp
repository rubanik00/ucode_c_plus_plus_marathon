#include "moveAlong.h"

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        std::cerr << "usage: ./moveAlong [args]" << std::endl;
        exit(1);
    }

    std::vector<std::string> args;

    for (int i = 1; argv[i]; i++) {
        args.push_back(argv[i]);
    }
    
    moveAlong(args);

    return 0;
}
