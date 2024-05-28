#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class   HumanB
{
    private:
        Weapon  *_weapon;
        std::string _name;
        static  Weapon defaultWeapon;
    public:
        HumanB(std::string name, Weapon *weapon);
        HumanB(std::string name);
        ~HumanB(void);
        void        setWeapon(Weapon *weapon);
        std::string getName(void);
        void        attack(void);
};

#endif