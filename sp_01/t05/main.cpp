#include "stdAlgoV2.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage: ./stdAlgoV2 [file_name]" << std::endl;
        exit(1);
    }

    std::ifstream file(argv[1]);
    
    if (!file) {
		std::cerr << "error" << std::endl; 
        exit(1);
	}

    std::string str;
    std::forward_list<std::string> list; 

    while (std::getline(file,str)) {
        list.push_front(str);
    }
    file.close();

    list = checkValid(list);
    writeToFile(list, argv[1]);

    return 0;
}