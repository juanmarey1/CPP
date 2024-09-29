#include "Cat.hpp"



Cat::Cat() {
    this->type = "Cat";
    std::cout << this->type << " has been created!" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &cat): Animal(cat) {
    std::cout << this->type << " has been copied!" << std::endl;
    this->brain = new Brain(*cat.brain);
}



Cat::~Cat() {
    delete this->brain;
    std::cout << this->type << " has been destructed!" << std::endl;
}



Cat &Cat::operator = (const Cat &cat) {
    if (this != &cat) {
        this->type = cat.type;
        delete this->brain;
        this->brain = new Brain(*cat.brain);
    }
    return (*this);
}





Brain   *Cat::getBrain(void) const {
    return (this->brain);
}

void    Cat::makeSound(void) const {
    std::cout << "Miau Miau!" << std::endl;
}