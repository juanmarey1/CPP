#pragma once

#include <iostream>
#include <string>

class ClapTrap 
{

    protected:

        std::string     _Name;
        unsigned int    _Hit_points;
        unsigned int    _Energy_points;
        unsigned int    _Attack_damage;

    public:

        ClapTrap(std::string Name);
        ClapTrap(ClapTrap const &claptrap);
        virtual ~ClapTrap();

        ClapTrap    &operator = (ClapTrap const &claptrap);

        virtual void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

};