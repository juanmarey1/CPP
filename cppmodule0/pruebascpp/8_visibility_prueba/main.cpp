#include <iostream>
#include "sample.class.hpp"

/*
Public attributes --> Can be accessed from inside or outside the class
Private attributes --> Can only be accessed from the inside of the class
--We usually access private attributes through public functions--
*/

int main(void)
{
    Sample  example;

    std::cout<<"Public num 1: "<<example.public_num<<std::endl;
    example.public_num = 42;;
    std::cout<<"Public num 2: "<<example.public_num<<std::endl;

    example.public_function();

    example.ft_private_function();

    return (0);
}