#include "HumanB.hpp"

HumanB::HumanB(std::string Name) {
    this->name = Name;
    this->weapon = NULL;
    return ;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
    return ;
}

void    HumanB::attack() const {
    if (this->weapon == NULL)
        return ;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    return ;
}