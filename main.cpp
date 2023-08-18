#include <iostream>
#include <string>
#include "charr/creature.hpp"
#include "charr/player.hpp"
#include "charr/monster.hpp"
#include <random>

int main()
{

    for (int i{ 0 }; i < 10; ++i)
    {
        Monster m{ Monster::getRandomMonster() };
        std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";
    }

    return 0;
}

