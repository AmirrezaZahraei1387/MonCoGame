//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_CREATURE_H
#define COVV_GME_CREATURE_H

#include <string_view>

class Creature{

public:

    explicit Creature(std::string_view name,char symbol,int health,int damage,int gold)
    :m_name{name},
    m_symbol{symbol}, m_health{health},
    m_damage{damage}, m_gold{gold}
    {}

    std::string_view getName() const{return m_name;}
    char getSymbol() const{return m_symbol;}
    int getHealth() const{return m_health;}
    int getDamage() const{return m_damage;}
    int getGold() const{return m_gold;}


    bool isDead() const{return m_health <= 0;}
    void reduceHealth(int damage){m_health -= damage;}
    void addGold(int gold){m_gold += gold;}

private:
    std::string_view m_name{};
    char m_symbol{};
    int m_health{};
    int m_damage{};
    int m_gold{};
};

#endif //COVV_GME_CREATURE_H
