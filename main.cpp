#include <iostream>
#include <string>
#include "charr/creature.hpp"
#include "charr/player.hpp"
#include "charr/monster.hpp"
#include "randomg.hpp"
#include "env.hpp"


int main()
{
    std::string name;
    std::cout<<"please enter your name:";
    std::cin>>name;
    std::cout<<"welcome "<<name<<std::endl;
    return 0;
}

