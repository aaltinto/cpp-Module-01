#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : _weapon(weapon), _name(name)
{
    std::cout << this->getName() << " created with " << this->_weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) : _weapon(NULL)
{
    this->_name = name;
    std::cout << this->getName() << " created" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << this->getName() << " destroyed" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->getName() << " attacks with " \
        << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon *weapon)
{
    this->_weapon = weapon;
    std::cout << this->getName() << "  grabbed " \
    << this->_weapon->getType() << std::endl;
}

std::string HumanB::getName(void) 
{
    return (this->_name);
}