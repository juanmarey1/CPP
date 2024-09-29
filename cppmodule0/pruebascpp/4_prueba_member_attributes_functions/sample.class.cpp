#include "sample.class.hpp"
#include <iostream>

Sample::Sample()
{
    std::cout<<"Constructor called"<<std::endl;
    return ;
}

Sample::~Sample()
{
    std::cout<<"Destructor called"<<std::endl;
    return ;
}

void    Sample::ft_example(void)
{
    std::cout<<"Public class function called"<<std::endl;
    return ;
}