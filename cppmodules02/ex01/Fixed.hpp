#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <fstream>

class Fixed
{

    private:

        int                 num;
        static const int    num_fract_bits;

    public:

        Fixed();
        Fixed(int const int_number);
        Fixed(float const float_number);
        Fixed(Fixed const &source);

        Fixed                   &operator = (Fixed const &source);
        friend std::ostream     &operator << (std::ostream &output, Fixed const &source); // como viene de std y devuelve un std, se declara como friend

        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;

};