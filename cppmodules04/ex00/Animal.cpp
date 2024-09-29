#include "Animal.hpp"



Animal::Animal() {
    this->type = "Animal";
    std::cout << this->type << " has been created!" << std::endl;
}

Animal::Animal(const Animal &animal) {
    *this = animal;
    std::cout << this->type << " has been copied!" << std::endl;
}



Animal::~Animal() {
    std::cout << "An animal has been destroyed!" << std::endl;
}



Animal  &Animal::operator = (const Animal &animal) {
    if (this != &animal) {
        this->type = animal.type;
    }
    return (*this);
}





std::string Animal::getType(void) const {
    return (this->type);
}

void    Animal::makeSound(void) const {
    std::cout << "The animal makes a sound!" << std::endl;
}