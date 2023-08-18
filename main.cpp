#include <iostream>
#include <string>
#include "creature.hpp"
#include "player.hpp"
#include "monster.hpp"
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

