#include <iostream>
#include "sample.class2.hpp"

Sample2::Sample2(char a1, int b2, float c3) : a(a1), b(b2), c(c3)
{
    std::cout<<"Constructor called"<<std::endl;
    std::cout<<"a: "<<this->a<<std::endl;
    std::cout<<"b: "<<this->b<<std::endl;
    std::cout<<"c: "<<this->c<<std::endl;
    return ;
}

Sample2::~Sample2(void)
{
    std::cout<<"Destructor called"<<std::endl;
    return ;
}