#include "draugr.h"

static std::smatch getNames(std::string s) {
    std::regex r(R"lit((.+),(.+))lit");
    std::smatch match;

    try {
        if (!std::regex_match(s, match, r))
            throw false;
        return match;
    } catch (...) {
        throw std::runtime_error("Invalid names");
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3 || argc > 5) {
        std::cerr << "usage: ./draugr [shoutNumber] [name1,name2] [health] [frostResist]" << std::endl;
        exit(1);
    }

    try {
        int shoutNumber = std::stoi(argv[1]);
        std::smatch names = getNames(argv[2]);

        if (argc == 4) {
            Draugr draugr(std::stod(argv[3]));
            draugr.setName(names[1]);
            draugr.shoutPhrase(shoutNumber);

            Draugr draugr2 = draugr;
            draugr2.setName(names[2]);
            draugr2.shoutPhrase(shoutNumber);
        } else if (argc == 5) {
            Draugr draugr(std::stod(argv[3]), std::stoi(argv[4]));
            draugr.setName(names[1]);
            draugr.shoutPhrase(shoutNumber);

            Draugr draugr2 = std::move(draugr);
            draugr2.setName(names[2]);
            draugr2.shoutPhrase(shoutNumber);
        }
    } catch (std::out_of_range &e) {
        std::cerr << "Error" << std::endl;
    } catch (std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }

    return 0;
}
