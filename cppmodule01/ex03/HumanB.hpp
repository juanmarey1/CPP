#pragma once
#include "Weapon.hpp"

class HumanB 
{

    private:

        std::string name;
        Weapon      *weapon;

    public:

        HumanB(std::string Name);
        void    setWeapon(Weapon& weapon);
        void    attack(void) const;

};