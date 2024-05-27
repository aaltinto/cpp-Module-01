#include "Zombie.hpp"

int main()
{
    Zombie *has;
    has = newZombie("test zombie");
    randomChump("Hasan");
    has->announce();
    delete has;
}