#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
bool Zombie::setName(std::string name)
{
	if (name == "")
	    return (std::cout << "Name could not be empty", false);
	this->name = name;
	return (true);
}

std::string	Zombie::getName()
{
	return (this->name);
}

Zombie::~Zombie()
{
	std::cout << this->name << " Destroyed" << std::endl;
}
Zombie::Zombie()
{
	this->name = "";
}