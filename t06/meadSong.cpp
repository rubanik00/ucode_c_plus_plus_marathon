#include "meadSong.h"

void printBottle(std::string str, int i) {
    std::cout << TAKE_ONE_DOWN << i - 1 << str << ON_THE_WALL << ".\n\n";
}

void meadSong() {
    int i = 99;

    for (; i > 1; i--) {
        std::string num_of_bottles = std::to_string(i) + BOTTLES;

        std::cout << num_of_bottles << ON_THE_WALL << ", " << num_of_bottles << ".\n";
        
        if (i == 2)
            printBottle(BOTTLE_OF_MEAD, i);
        else
            printBottle(BOTTLES, i);
    }

    std::cout << "1" << BOTTLE_OF_MEAD << ON_THE_WALL << " 1" << BOTTLE_OF_MEAD << ".\n";
    std::cout << "Take it down and pass it around, no more bottles of mead" << ON_THE_WALL << ".\n\n";

    std::cout << "No " << MORE_BOTTLES << " of mead.\n";
    std::cout << "Go to the store and buy some more, " << i << BOTTLES << ON_THE_WALL << ".\n";
}
