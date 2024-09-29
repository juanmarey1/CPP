#pragma once
#include "Weapon.hpp"

class HumanA
{

    private:

        Weapon&     weapon;
        std::string name;

    public:

        HumanA(std::string Name, Weapon& Weapon) : weapon(Weapon), name(Name) {}
        void    attack(void) const;

};