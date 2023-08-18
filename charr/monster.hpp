//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_MONSTER_HPP
#define COVV_GME_MONSTER_HPP

#include <random>
#include "../randomg.hpp"
#include <cstddef>
#include <array>
#include "creature.hpp"


class Monster: public Creature{
public:
    enum class Type{
        dragon,
        orc,
        slime,
        max_types
    };

    Monster(Type type)
    : Creature{getDefaultCreature(type)}
    {
    }


    static const Monster getRandomMonster()
    {

        std::uniform_int_distribution<> uid(0, static_cast<int>(Type::max_types) - 1);
        return static_cast<Type>(uid(random::mt));
    }


private:



    static const Creature& getDefaultCreature(Type type){
        static const std::array<Creature, static_cast<std::size_t>(Type::max_types)> data{
                {{ "dragon", 'D', 20, 4, 100 },
                  { "orc", 'o', 4, 2, 25 },
                  { "slime", 's', 1, 1, 10 } }
        };

        return data.at(static_cast<size_t>(type));
    }



};

#endif //COVV_GME_MONSTER_HPP
