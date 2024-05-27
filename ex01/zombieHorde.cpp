#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie **zombies;
    int     i;

    i = -1;
    while (++i < N)
    {
        zombies[i] = new Zombie;
        zombies[i]->setName(name);
    }
    return (zombies[0]);
}