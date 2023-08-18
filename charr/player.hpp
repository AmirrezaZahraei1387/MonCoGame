//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_PLAYER_HPP
#define COVV_GME_PLAYER_HPP

#include <iostream>
#include <string_view>
#include "creature.hpp"
#include "postion.hpp"

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

    void drink(Potion& potion)
    {
    m_health += potion.getHealth();
    m_damage += potion.getDamage();
    }

    int getLevel() const{ return m_level;}
    bool hasWon() const{return m_level >= 10;}

    friend inline std::ostream& operator<< (std::ostream& out, Player& player){
        out<<player.m_name<<" is in level "<<player.m_level<<std::endl;
        out<<"your status is:"<<std::endl;
        out<<"health:"<<player.m_health<<std::endl;
        out<<"damage:"<<player.m_damage<<std::endl;
        out<<"symbol:"<<player.m_symbol<<std::endl;
        return out;
    }

private:
    int m_level{1};
};


#endif //COVV_GME_PLAYER_HPP
