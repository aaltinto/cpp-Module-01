#include "Zombie.hpp"

int main()
{
    Zombie *zombiii;

    zombiii = zombieHorde(4, "hasan");
    zombiii[0].announce();
    zombiii[1].announce();
    zombiii[2].announce();
    zombiii[3].announce();

    delete[] zombiii;
    return (0);
}