#include "Weapon.hpp"

Weapon::Weapon(void)
{

	this->_type = "(null)";
	std::cout << this->getType() << " created!" << std::endl;
}
Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << this->getType() << " created!" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << this->getType() << " destroyed!" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string Weapon::getType() const
{
	return (this->_type);
}