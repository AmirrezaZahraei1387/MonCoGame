//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_ENV_HPP
#define COVV_GME_ENV_HPP

#include "player.hpp"
#include "monster.hpp"
#include "postion.hpp"


class WorldEnv{

public:

    explicit WorldEnv(Player& player)
    :m_player(player)
    {
    }

    void encounterMonster()
    {
        Monster monster{Monster::getRandomMonster()};

    }

private:
    Player& m_player;
};

#endif //COVV_GME_ENV_HPP
