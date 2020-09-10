#pragma once

#include <iostream>
#include <map>
#include <string>
#include <functional>
#include <regex>

class Draugr {
    public:
        Draugr();

        Draugr(int frostResist);
        Draugr(double health, int frostResist);
        Draugr(Draugr &other);
        Draugr(Draugr &&other);

        void setName(const std::string &&name);        
        void shoutPhrase(int shoutNumber) const;
        
    private:
        double m_health;
        const int m_frostResist;
        std::string m_name;
};
