#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << this->getName();
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
	std::cout.clear();
}
bool Zombie::setName(std::string name)
{
	if (name == "")
	    return (std::cout << "Name could not be empty", false);
	this->name = name;
	return (true);
}

std::string	Zombie::getName() const
{
	return (this->name);
}

Zombie::~Zombie()
{
	std::cout << this->name << " Destroyed" << std::endl;
}
Zombie::Zombie(void)
{
	this->name = "(null)";
	std::cout << this->name << ": Created" << std:: endl;
}
Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << ": Created" << std:: endl;
}