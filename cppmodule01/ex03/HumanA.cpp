#include "HumanA.hpp"

void    HumanA::attack(void) const {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
    return ;
}