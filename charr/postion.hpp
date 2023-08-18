//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_POSTION_HPP
#define COVV_GME_POSTION_HPP

#include <iostream>
#include <random>
#include "../randomg.hpp"
#include <array>
#include <cstddef>

class Potion{

public:

    enum class Type{
        poison,
        strength,
        health,
        max_type,
    };

    Potion(Type type, int health, int damage)
    : m_type{type}, m_health{health}, m_damage{damage}
    {
    }

    Type getType() const{return m_type;}



    int getHealth() const{return m_health;}
    int getDamage() const{return m_damage;}

    static const Potion& getRandomPotion()
    {

        static std::array<Potion, static_cast<size_t>(Type::max_type)> data{
                {{Type::health, 3, 0},
                {Type::strength, 0, 3},
                {Type::poison, -1, 0}}
        };
        static std::uniform_int_distribution<> uid(0, static_cast<size_t>(Type::max_type)-1);

        return data.at(uid(random::mt));
    }

    friend inline std::ostream& operator<< (std::ostream& out, Potion& potion){
        switch (potion.m_type) {
            case Type::strength: out<< "strength";break;
            case Type::poison: out<< "poison";break;
            case Type::health: out<< "health";break;
        }

        return out;
    }

private:

    Type m_type{};
    int m_health{};
    int m_damage{};

};

#endif //COVV_GME_POSTION_HPP
