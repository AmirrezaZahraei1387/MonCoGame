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
        std::cout<<"this monster is of family "<<monster.getName()<<std::endl;
        input::MonBe work{input::getMonBeInput()};

        switch (work) {
            case input::MonBe::Fight:
                monster.reduceHealth(m_player.getDamage());

                if(monster.isDead()){
                    std::cout<<"oh, you killed this stupid "<<monster.getName();
                    m_player.addGold(monster.getGold());
                    m_player.levelUp();
                    break;

                }else{
                    if(random::putP<50>()){
                        std::cout<<"nooo, it is still alive. it is harming you!"<<std::endl;
                        m_player.reduceHealth(monster.getDamage());
                        break;
                    }
                }

                std::cout<<"ohh, you just escaped"<<std::endl;
                break;
            case input::MonBe::Run:

                if(random::putP<50>()){
                    std::cout<<"nooo, it is chasing you. damag ahhhh!!!"<<std::endl;
                    m_player.reduceHealth(monster.getDamage());
                    break;
                }
                std::cout<<"ohh, you just escaped"<<std::endl;
                break;
        }
    }

    void putPotion()
    {
        if(random::putP<30>()){
            Potion potion{Potion::getRandomPotion()};
            input::Drink drink{input::getDrinkInput()};

            switch(drink){
                case input::Drink::Drin:
                    m_player.drink(potion);
                    std::cout<<"that was "<<potion<<std::endl;
                    break;
                case input::Drink::DoNot:
                    std::cout<<"ok leave it."<<std::endl;
                    break;
            }
        }
    }

private:
    Player& m_player;
};

#endif //COVV_GME_ENV_HPP
