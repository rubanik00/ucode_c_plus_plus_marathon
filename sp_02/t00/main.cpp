#include "uniqueWords.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage: ./uniqueWords [file_name]" << std::endl;
        exit(1);
    }

    std::ifstream file(argv[1]);
    if (!file.is_open() || file.peek() == -1) {
        std::cerr << "error" << std::endl;
        exit(1);
    }

    std::set<std::string> set = uniqueWords(file);

    writeToFile(set, argv[1]);
    file.close();

    return 0;
}
