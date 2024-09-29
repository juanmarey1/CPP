#include "Dog.hpp"



Dog::Dog() {
    this->type = "Dog";
    std::cout << this->type << " has been created!" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &dog): Animal(dog) {
    std::cout << this->type << " has been copied!" << std::endl;
    this->brain = new Brain(*dog.brain);
}



Dog::~Dog() {
    delete this->brain;
    std::cout << this->type << " has been destructed!" << std::endl;
}



Dog &Dog::operator = (const Dog &dog) {
    if (this != &dog) {
        this->type = dog.type;
        delete this->brain;
        this->brain = new Brain(*dog.brain);
    }
    return (*this);
}





Brain   *Dog::getBrain(void) const {
    return (this->brain);
}

void    Dog::makeSound(void) const {
    std::cout << "Guau Guau!" << std::endl;
}