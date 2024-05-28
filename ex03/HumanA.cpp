#include    "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) 
{
    std::cout << this->_name << " created with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << this->_name << " destroyed" << std::endl;
}

void    HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with " \
        << this->_weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon &weapon)
{
    this->_weapon = weapon;
    std::cout << this->_name << "  grabbed " \
    << this->_weapon.getType() << std::endl;
}

std::string HumanA::getName(void) const
{
    return (this->_name);
}    