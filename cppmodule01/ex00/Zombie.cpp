#include "Zombie.hpp"

Zombie::Zombie(std::string _name) {
    this->name = _name;
    return ;
}

Zombie::~Zombie(void) {
    std::cout << this->name << ": is going to be destroyed" << std::endl;
    return ;
}

void    Zombie::announce() const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}