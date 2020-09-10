#include "tesLibrary.h"

std::vector<std::string> fileToVector(std::string fname) {
    std::vector<std::string> f;
    std::regex r("\"(.)+\"( )*:( )*\"(.)+\"");
    std::smatch match;
    int number = 1;

    try {
        std::ifstream fin(fname, std::ios::in);
        if (!fin || fin.peek() == std::ifstream::traits_type::eof())
            throw false;

        std::string s;
        while (std::getline(fin, s)) {
            if (!std::regex_search(s, match, r)) {
                std::cerr << "Line " << number << " is invalid\n";
                exit(EXIT_FAILURE);
            }
            f.push_back(s);
            number++;
        }
        fin.close();
        return f;
    } catch (...) {
        std::cerr << "error\n";
        exit(EXIT_FAILURE);
    }
}

static std::string getStr(std::string &line, std::regex &r) {
    std::regex regexp("\".+\"");
    std::smatch match;
    std::string res;

    std::regex_search(line, match, r);
    res = match[0];

    std::regex_search(res, match, regexp);
    res = std::string(match[0]).substr(1, match[0].length() - 2);

    return res;
}

static void addBook(std::multimap<std::string, std::string>& lib, std::string &line) {
    std::regex regexA("\".+\"( )*:"),
               regexB(":( )*\".+\"");

    std::string author = getStr(line, regexA),
                book =   getStr(line, regexB);

    lib.insert({author, book});
}

void fillLib(std::multimap<std::string, std::string> &lib, std::vector<std::string> &file) {
    for (auto s : file) {
        addBook(lib, s);
    }
}

static void printOne(const std::string& x, const std::string& y, int c) {
    if (c == 1)
        std::cout << x << ":\n" << " 1: " << y << std::endl;
    else
        std::cout << " " << c << ": " << y << std::endl;
}

void printLib(const std::multimap<std::string, std::string>& lib) {
    auto x = lib.begin();
    while (x != lib.end()) {
        int count = 1;
        printOne(x->first, x->second, count);
        std::string author = x->first;
        ++x;
        for (;author == x->first; ++x) {
            printOne(x->first, x->second, ++count);
        }
    }
}
