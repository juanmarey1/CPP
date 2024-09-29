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

        bool                    operator > (Fixed const &source) const;
        bool                    operator < (Fixed const &source) const;
        bool                    operator >= (Fixed const &source) const;
        bool                    operator <= (Fixed const &source) const;
        bool                    operator == (Fixed const &source) const;
        bool                    operator != (Fixed const &source) const;

        Fixed                   operator + (Fixed const &source) const;
        Fixed                   operator - (Fixed const &source) const;
        Fixed                   operator * (Fixed const &source) const;
        Fixed                   operator / (Fixed const &source) const;

        Fixed                   &operator ++ ();
        Fixed                   operator ++(int);
        Fixed                   &operator -- ();
        Fixed                   operator --(int);

        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;
        
        static Fixed  &min(Fixed &n1, Fixed &n2);
        static const Fixed  &min(Fixed const &n1, Fixed const &n2);       
        static Fixed  &max(Fixed &n1, Fixed &n2);
        static const Fixed  &max(Fixed const &n1, Fixed const &n2);  
};