#include "Zombie.hpp"

Zombie::Zombie() {
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

void    Zombie::set_name(std::string _name) {
    this->name = _name;
    announce();
    return ;
}