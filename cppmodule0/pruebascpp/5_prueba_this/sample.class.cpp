#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void)
{
    std::cout<<"Constructor called"<<std::endl;
    Sample::num = 42;
    std::cout<<"Class number : "<<this->num<<std::endl;
    Sample::ft_example();
    return ;
}

Sample::~Sample(void)
{
    std::cout<<"Destructor called"<<std::endl;
    return ;
}

void    Sample::ft_example(void)
{
    std::cout<<"Example function called"<<std::endl;
    return ;
}