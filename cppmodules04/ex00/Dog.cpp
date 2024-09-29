#include "Dog.hpp"



Dog::Dog() {
    this->type = "Dog";
    std::cout << this->type << " has been created!" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog) {
    *this = dog;
    std::cout << this->type << " has been copied!" << std::endl;
}



Dog::~Dog() {
    std::cout << this->type << " has been destructed!" << std::endl;
}



Dog &Dog::operator = (const Dog &dog) {
    if (this != &dog) {
        this->type = dog.type;
    }
    return (*this);
}





void    Dog::makeSound(void) const {
    std::cout << "Guau Guau!" << std::endl;
}