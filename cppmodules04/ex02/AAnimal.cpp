#include "AAnimal.hpp"



AAnimal::AAnimal() {
    this->type = "Animal";
}

AAnimal::AAnimal(const AAnimal &animal) {
    *this = animal;
}



AAnimal::~AAnimal() {
    return ;
}



AAnimal  &AAnimal::operator = (const AAnimal &animal) {
    if (this != &animal) {
        this->type = animal.type;
    }
    return (*this);
}





std::string AAnimal::getType(void) const {
    return (this->type);
}

void    AAnimal::makeSound(void) const {
    std::cout << "The animal makes a sound!" << std::endl;
}