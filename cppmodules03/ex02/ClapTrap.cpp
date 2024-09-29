#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string Name): _Name(Name), _Hit_points (10), _Energy_points (10), _Attack_damage (0) {
    std::cout << "Constructor called for ClapTrap: " << this->_Name << std::endl;
}


ClapTrap::ClapTrap(ClapTrap const &claptrap) {
    *this = claptrap;
    std::cout << "Copy Constructor called for ClapTrap: " << this->_Name << std::endl;
}

ClapTrap    &ClapTrap::operator = (ClapTrap const &claptrap) {

    if (this != &claptrap) {
        this->_Name = claptrap._Name;
        this->_Attack_damage = claptrap._Attack_damage;
        this->_Energy_points = claptrap._Energy_points;
        this->_Hit_points = claptrap._Hit_points;
    }

    return (*this);

}



ClapTrap::~ClapTrap() {
    std::cout << "Destructor called for ClapTrap: " << this->_Name << std::endl;
    return ;
}





void    ClapTrap::attack(const std::string &target) {
    
    if (this->_Energy_points == 0 || this->_Hit_points == 0) {
        std::cout << "ClapTrap " << this->_Name << " can't attack because he has no Energy or is dead!" << std::endl;
    }
    else {
        this->_Energy_points--;
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (this->_Hit_points == 0) {
        std::cout << "ClapTrap " << this->_Name << " is already dead!" << std::endl; 
    }
    else {
        std::cout << "ClapTrap " << this->_Name << " takes " << amount << " points of damage, ";
        if (amount >= this->_Hit_points) {
            this->_Hit_points = 0;
            std::cout << "and he dies!" << std::endl;
        }
        else {
            this->_Hit_points -= amount;
            std::cout <<"but he lives!" << std::endl;
        }
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->_Energy_points == 0 || this->_Hit_points == 0) {
        std::cout << "ClapTrap " << this->_Name << " can't repair himself because he has no Energy or is dead!" << std::endl;
    }
    else {
        this->_Energy_points--;
        this->_Hit_points += amount;
        std::cout << "ClapTrap " << this->_Name << " repairs for a total of " << amount << " health!" << std::endl;
    }
}