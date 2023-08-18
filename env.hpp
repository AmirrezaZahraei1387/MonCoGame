//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_ENV_HPP
#define COVV_GME_ENV_HPP

#include "charr/player.hpp"
#include "charr/monster.hpp"
#include "charr/postion.hpp"
#include "input.hpp"


class WorldEnv{

public:

    explicit WorldEnv(Player& player)
    :m_player(player)
    {
    }

    void encounterMonster()
    {
        Monster monster{Monster::getRandomMonster()};
        input::MonBe work{input::getMoBeInput()};

        switch (work) {
            case input::MonBe::Fight:
                monster.reduceHealth(m_player.getDamage());

                if(monster.isDead()){
                    std::cout<<"oh, you killed this stupid "<<monster.getName();
                    m_player.addGold(monster.getGold());
                }else{

                }
        }
    }

private:
    Player& m_player;
};

#endif //COVV_GME_ENV_HPP
