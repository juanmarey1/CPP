#include "FragTrap.hpp"



FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->_Attack_damage = 30;
    this->_Energy_points = 100;
    this->_Hit_points = 100;
    std::cout << "Fragtrap " << this->_Name << " has been created!" <<  std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap(fragtrap) {
    *this = fragtrap;
    std::cout << "Fragtrap " << this->_Name << " has been copied!" <<  std::endl;
}



FragTrap    &FragTrap::operator = (const FragTrap &fragtrap) {
    if (this != &fragtrap) {
        this->_Name = fragtrap._Name;
        this->_Attack_damage = fragtrap._Attack_damage;
        this->_Energy_points = fragtrap._Energy_points;
        this->_Hit_points = fragtrap._Hit_points;
    }

    return (*this);
}



FragTrap::~FragTrap() {
    std::cout << "Fragtrap " << this->_Name << " has been destroyed!" <<  std::endl;
}



void    FragTrap::highFivesGuys(void) {
    if (this->_Hit_points > 0) {
        std::cout << "Fragtrap " << this->_Name << " requests a high five!" <<  std::endl;
    }
    else {
        std::cout << "Fragtrap " << this->_Name << " cannot request a high five becuase he is dead!" <<  std::endl;
    }
}