#include <iostream>
#include "sample.class1.hpp"

Sample1::Sample1(char a1, int b2, float c3)
{
    std::cout<<"Constructor called"<<std::endl;

    this->a = a1;
    this->b = b2;
    this->c = c3;

    std::cout<<"a: "<<this->a<<std::endl;
    std::cout<<"b: "<<this->b<<std::endl;
    std::cout<<"c: "<<this->c<<std::endl;

    return ;
}

Sample1::~Sample1(void)
{
    std::cout<<"Destructor called"<<std::endl;
    return ;
}