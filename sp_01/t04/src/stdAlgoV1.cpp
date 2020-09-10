#include "stdAlgoV1.h"

void printRes(std::forward_list<std::string> list) {
    int size = 0;
    bool cont_rish = false;
    bool none_of_15 = true;
    bool all_end_with_vel = false;
    int without_mel = 0;
    
    size = std::distance(list.begin(), list.end());

    if (size == 0) {
        std::cerr << "error" << std::endl; 
        exit(1);
    }

    cont_rish = (std::find_if(list.begin(), list.end(), [](const std::string &s) {
                         return s.find("rich") != std::string::npos;
                     }) != list.end());
    none_of_15 = (std::find_if(list.begin(), list.end(), [](const std::string &s) {
                      return s.length() == 15;
                  }) != list.end());
    all_end_with_vel = (std::find_if(list.begin(), list.end(), [](const std::string &s) {
                            return (s.find("vel", s.length() - 3) != s.length() - 3);
                        }) != list.end());
    without_mel = std::count_if(list.begin(), list.end(), [](const std::string &s) {
        return s.find("mel") == std::string::npos;
    });

    std::cout << "size: " << size << std::endl;
    std::cout << "contains'rich': " << (cont_rish ? "true" : "false") << std::endl;
    std::cout << "none of lengths is 15: " << (none_of_15 ? "false" : "true") << std::endl;
    std::cout << "all end with'vel': " << (all_end_with_vel ? "false": "true") << std::endl;
    std::cout << "without'mel': " << without_mel << std::endl;
}
