#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies;

    zombies = new Zombie[N];
    for (int i = 0; N > i; i++)
        zombies[i].setName(name);
    return (zombies);
}
