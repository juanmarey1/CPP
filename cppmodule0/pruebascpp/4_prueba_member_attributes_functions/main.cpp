#include "sample.class.hpp"
#include <iostream>

/*
In a class you can define functions and attributes.
You can use them with the name of the class and a "." between them
*/

int main(void)
{
    Sample  example;

    example.num = 1;
    std::cout<<"Class number: "<<example.num<<std::endl;
    example.ft_example();
    return (0);
}