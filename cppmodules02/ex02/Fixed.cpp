#include "Fixed.hpp"

const int   Fixed::num_fract_bits = 8;

/////////         CONSTRUCTORS            ////////////

Fixed::Fixed(): num(0) {
    return ;
}

Fixed::Fixed(int const int_number) {
    this->num = int_number * (1 << this->num_fract_bits);
}

Fixed::Fixed(float const float_number) {
    this->num = roundf(float_number * (1 << this->num_fract_bits));
}

Fixed::Fixed(Fixed const &source) {
    *this = source;
}

///////////          OPERATORS           ///////////////

Fixed   &Fixed::operator = (Fixed const &source) { //Siempre que utilicemos el simbolo '=' para un puntero a un objeto, nos devolverá el objeto resultante con los valores adquiridos en la función operator
    if (this != &source) {
        this->num = source.getRawBits();
    }
    return (*this);
}

std::ostream    &operator << (std::ostream &output, Fixed const &source) {
    output << source.toFloat();
    return (output);
}

// COMPARISON //

bool   Fixed::operator > (Fixed const &source) const {
    return (this->num > source.num);
}

bool   Fixed::operator < (Fixed const &source) const {
    return (this->num < source.num);
}

bool   Fixed::operator >= (Fixed const &source) const {
    return (this->num >= source.num);
}

bool   Fixed::operator <= (Fixed const &source) const {
    return (this->num <= source.num);
}

bool   Fixed::operator == (Fixed const &source) const {
    return (this->num == source.num);
}

bool   Fixed::operator != (Fixed const &source) const {
    return (this->num != source.num);
}

// ARITHMETIC //

Fixed   Fixed::operator + (Fixed const &source) const {
    Fixed   sum(this->toFloat() + source.toFloat());
    return (sum);
}

Fixed   Fixed::operator - (Fixed const &source) const {
    Fixed   diff(this->toFloat() - source.toFloat());
    return (diff);
}

Fixed   Fixed::operator * (Fixed const &source) const {
    Fixed   multiplier(this->toFloat() * source.toFloat());
    return (multiplier);
}

Fixed   Fixed::operator / (Fixed const &source) const {
    Fixed   division(this->toFloat() / source.toFloat());
    return (division);
}

// INCREMENT/DECREMENT //

Fixed   &Fixed::operator ++ () {
    this->num++;
    return (*this);
}

Fixed   Fixed::operator ++ (int) {
    Fixed   intermediate;
    intermediate = *this;
    this->num++;
    return (intermediate);
}

Fixed   &Fixed::operator -- () {
    this->num--;
    return (*this);
}

Fixed   Fixed::operator -- (int) {
    Fixed   intermediate;
    intermediate = *this;
    this->num--;
    return (intermediate);
}

///////////          DESTRUCTOR           //////////////

Fixed::~Fixed() {
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

// COMPARISON //

Fixed    &Fixed::min(Fixed &n1, Fixed &n2) {
    if (n1 < n2)
        return (n1);
    else
        return (n2);
}

const Fixed    &Fixed::min(const Fixed &n1, const Fixed &n2) {
    if (n1 < n2)
        return (n1);
    else
        return (n2);
}

Fixed    &Fixed::max(Fixed &n1, Fixed &n2) {
    if (n1 > n2)
        return (n1);
    else
        return (n2);
}

const Fixed    &Fixed::max(const Fixed &n1, const Fixed &n2) {
    if (n1 > n2)
        return (n1);
    else
        return (n2);
}