//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_CREATURE_H
#define COVV_GME_CREATURE_H

#include <string_view>

class Creature{
public:


private:
    std::string_view m_name{};
    char m_symbol{};
    int health{};
    int damage{};
    int gold{};
};

#endif //COVV_GME_CREATURE_H
