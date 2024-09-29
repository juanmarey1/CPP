#include <iostream>
#include "sample.class.hpp"

Sample::Sample(float const f): a1(f), b1(42)
{
    std::cout<<"Constructor called"<<std::endl;
    return ;
}

Sample::~Sample(void)
{
    std::cout<<"Destructor called"<<std::endl;
    return ;
}

void    Sample::ft_example(void) const {
    std::cout<<"a1 num == "<<this->a1<<std::endl;
    std::cout<<"b1 num == "<<this->b1<<std::endl;

    return ;
}