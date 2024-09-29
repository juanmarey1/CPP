#include "WrongCat.hpp"



WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << this->type << " has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat): WrongAnimal(cat) {
    *this = cat;
    std::cout << this->type << " has been copied!" << std::endl;
}



WrongCat::~WrongCat() {
    std::cout << this->type << " has been destructed!" << std::endl;
}



WrongCat &WrongCat::operator = (const WrongCat &cat) {
    if (this != &cat) {
        this->type = cat.type;
    }
    return (*this);
}





void    WrongCat::makeSound(void) const {
    std::cout << "Miau Miau!" << std::endl;
}