#include "Cat.hpp"



Cat::Cat() {
    this->type = "Cat";
    std::cout << this->type << " has been created!" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat) {
    *this = cat;
    std::cout << this->type << " has been copied!" << std::endl;
}



Cat::~Cat() {
    std::cout << this->type << " has been destructed!" << std::endl;
}



Cat &Cat::operator = (const Cat &cat) {
    if (this != &cat) {
        this->type = cat.type;
    }
    return (*this);
}





void    Cat::makeSound(void) const {
    std::cout << "Miau Miau!" << std::endl;
}