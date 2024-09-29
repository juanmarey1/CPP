#include "ScavTrap.hpp"



ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->_Attack_damage = 20;
    this->_Energy_points = 50;
    this->_Hit_points = 100;
    std::cout << "ScavTrap " << this->_Name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap(scavtrap) {
    *this = scavtrap;
    std::cout << "Scavtrap " << this->_Name << " has been copied!" << std::endl;
}



ScavTrap    &ScavTrap::operator = (const ScavTrap &scavtrap) {
    if (this != &scavtrap) {
        this->_Name = scavtrap._Name;
        this->_Attack_damage = scavtrap._Attack_damage;
        this->_Energy_points = scavtrap._Energy_points;
        this->_Hit_points = scavtrap._Hit_points;
    }

    return (*this);
}



ScavTrap::~ScavTrap() {
    std::cout << "Scavtrap " << this->_Name << " has been destroyed!" << std::endl;
    return ;
}





void    ScavTrap::attack(const std::string &target) {
    if (this->_Energy_points == 0 || this->_Hit_points == 0) {
        std::cout << "ScavTrap " << this->_Name << " can't attack because he has no Energy or is dead!" << std::endl;
    }
    else {
        this->_Energy_points--;
        std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
    }
}

void    ScavTrap::guardGate(void) {
    if (this->_Hit_points > 0) {
        std::cout << "ScavTrap " << this->_Name << " is now in Gate Keeper mode..." << std::endl;
    }
    else {
        std::cout << "ScavTrap " << this->_Name << " can't enter Gate Keeper mode..., he is dead!" << std::endl;
    }
}