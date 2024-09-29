#pragma once

#include <string>
#include <iostream>

class Fixed
{

    private:

        int                 num;
        static const int    num_fract_bits;

    public:

        Fixed();
        Fixed(Fixed const &source);
        ~Fixed();

        Fixed   &operator=(Fixed const &source);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

};