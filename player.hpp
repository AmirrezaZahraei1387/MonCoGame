//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_PLAYER_HPP
#define COVV_GME_PLAYER_HPP

#include <string_view>
#include "creature.hpp"

class Player: public Creature{

public:

    Player(std::string_view name)
    : Creature(name, '@', 10, 1, 0)
    {
    }

    void levelUp(){
        m_level += 1;
        m_damage += 1;
    }

    int getLevel() const{ return m_level;}
    bool hasWon() const{return m_level >= 20;}

private:
    int m_level{1};
};


#endif //COVV_GME_PLAYER_HPP
