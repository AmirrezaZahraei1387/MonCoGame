//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_POSTION_HPP
#define COVV_GME_POSTION_HPP

class Potion{

public:

    enum class Type{
        poison,
        strength,
        health,
    };

    Potion(Type type, int health, int damage)
    : m_type{type}, m_health{health}, m_damage{damage}
    {
    }

    Type getType() const{return m_type;}
    int getHealth() const{return m_health;}
    int getDamage() const{return m_damage;}


private:

    Type m_type{};
    int m_health{};
    int m_damage{};

};

#endif //COVV_GME_POSTION_HPP
