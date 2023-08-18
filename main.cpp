#include <iostream>
#include <string>
#include "charr/creature.hpp"
#include "charr/player.hpp"
#include "charr/monster.hpp"
#include "randomg.hpp"
#include "env.hpp"


int main()
{

    std::cout<<"Dark World!"<<std::endl;

    std::string name;
    std::cout<<"please enter your name:";
    std::cin>>name;
    std::cout<<"welcome "<<name<<std::endl;

    Player player{name};
    WorldEnv env{player};

    std::cout<<std::endl;
    std::cout<<player<<std::endl;

    while(true){

        if(player.isDead()) {
            std::cout << "you are dead. ha ha ha" << std::endl;
            std::cout<<player<<std::endl;
            break;
        }

        if(player.hasWon()){
            std::cout<<"you won. you survived in the dark world."<<std::endl;
            std::cout<<player<<std::endl;
            break;
        }

        env.encounterMonster();
        std::cout<<player<<std::endl;
        env.putPotion();
    }

    return 0;
}

