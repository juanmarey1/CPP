#include "Fixed.hpp"

const int   Fixed::num_fract_bits = 8;

Fixed::Fixed(): num(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &source) {
    std::cout << "Copy constructor called" << std::endl;
    *this = source;
}

Fixed   &Fixed::operator=(Fixed const &source) { //Siempre que utilicemos el simbolo '=' para un puntero a un objeto, nos devolverá el objeto resultante con los valores adquiridos en la función operator
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source) {
        this->num = source.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->num);
}

void    Fixed::setRawBits(int const raw) {
    this->num = raw;
}