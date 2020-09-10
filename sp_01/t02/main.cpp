#include "visitAll.h"

int main(int argc, char *argv[]) {

    if (argc <= 1) {
        std::cerr << "usage: ./visitAll [[name,stamina,distance] ...]" << std::endl;
        exit(1);
    }

    std::deque<Town *> towns;

    for (int i = 1; i < argc; i++) {
        towns.push_back(getArguments(argv[i], i - 1));
    }

    visitAll(towns);

    return 0;
}
