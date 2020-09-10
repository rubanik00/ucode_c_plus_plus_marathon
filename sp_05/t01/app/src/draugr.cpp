#include "draugr.h"

Draugr::Draugr() : Draugr::Draugr(100,50) {}

Draugr::Draugr(int frostResist) : Draugr::Draugr(100, frostResist) {}

Draugr::Draugr(double health, int frostResist) : m_health(health), m_frostResist(frostResist) {
    std::cout << "Draugr with " << this->m_health << " health and ";
    std::cout << this->m_frostResist << "% frost resist was born!" << std::endl;
};

void Draugr::Draugr::shoutPhrase(int shoutNumber) const {
    std::map<int, std::string> phrases = {
        {0, "Qiilaan Us Dilon!"},
        {1, "Bolog Aaz, Mal Lir!"},
        {2, "Kren Sosaal!"},
        {3, "Dir Volaan!"},
        {4, "Aar Vin Ok!"},
        {5, "Unslaad Krosis!"},
        {6, "Faaz! Paak! Dinok!"},
        {7, "Aav Dilon!"},
        {8, "Sovngarde Saraan!"}
    };

    std::string phrase;

    try {
        phrase = phrases.at(shoutNumber);
    }
    catch (const std::out_of_range& error) {
        throw std::runtime_error("Invalid shoutNumber");
    }

    std::cout << "Draugr (" << static_cast<int>(this->m_health) << " health, ";
    std::cout << this->m_frostResist << "% frost resist) shouts:" << std::endl;
    std::cout << phrase << std::endl;
}
