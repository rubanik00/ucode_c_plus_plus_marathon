#include "getSimpleSort.h"

int main(int argc, char *argv[]) {
    if (argc != 6) {
        std::cerr << "usage: ./simpleSort arg1 arg2 arg3 arg4 arg5" << std::endl;
        exit(1);
    }


    std::array<std::string, 5> arr = {argv[1], argv[2], argv[3], argv[4], argv[5]};
    std::sort(arr.begin(), arr.end());

    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << (i == arr.size() - 1 ? "\n" : " ");
    }
    
    return 0;
}
