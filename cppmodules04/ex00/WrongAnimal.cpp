#include "WrongAnimal.hpp"



WrongAnimal::WrongAnimal() {
    this->type = "WrongAnimal";
    std::cout << this->type << " has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
    *this = wrongAnimal;
    std::cout << this->type << " has been copied!" << std::endl;
}



WrongAnimal::~WrongAnimal() {
    std::cout << "An WrongAnimal has been destroyed!" << std::endl;
}



WrongAnimal  &WrongAnimal::operator = (const WrongAnimal &wrongAnimal) {
    if (this != &wrongAnimal) {
        this->type = wrongAnimal.type;
    }
    return (*this);
}





std::string WrongAnimal::getType(void) const {
    return (this->type);
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "The WrongAnimal makes a sound!" << std::endl;
}