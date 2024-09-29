#include "Fixed.hpp"

const int   Fixed::num_fract_bits = 8;

/////////         CONSTRUCTORS            ////////////

Fixed::Fixed(): num(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const int_number) {
    std::cout << "Int constructor called" << std::endl;
    this->num = int_number * (1 << this->num_fract_bits);
}

Fixed::Fixed(float const float_number) {
    std::cout << "Float constructor called" << std::endl;
    this->num = roundf(float_number * (1 << this->num_fract_bits));
}

Fixed::Fixed(Fixed const &source) {
    std::cout << "Copy constructor called" << std::endl;
    *this = source;
}

///////////          OPERATORS           ///////////////

Fixed   &Fixed::operator = (Fixed const &source) { //Siempre que utilicemos el simbolo '=' para un puntero a un objeto, nos devolverá el objeto resultante con los valores adquiridos en la función operator
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source) {
        this->num = source.getRawBits();
    }
    return (*this);
}

std::ostream    &operator << (std::ostream &output, Fixed const &source) {
    output << source.toFloat();
    return (output);
}

///////////          DESTRUCTOR           //////////////

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
}

///////////          FUNCTIONS            //////////////

int Fixed::getRawBits(void) const {
    return (this->num);
}

void    Fixed::setRawBits(int const raw) {
    this->num = raw;
}

int     Fixed::toInt(void) const {
    return (this->num / (1 << this->num_fract_bits));
}

float   Fixed::toFloat(void) const {
    return (static_cast<float>(this->num) / (1 << this->num_fract_bits));
}