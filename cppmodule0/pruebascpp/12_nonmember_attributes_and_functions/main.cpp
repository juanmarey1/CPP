#include <iostream>
#include "sample.class.hpp"

/*
If we want to create variables that are the same between all instances of a class, we have to use the keyword static
*/

void    f0(void)
{
    Sample instance;

    std::cout<<"Number of instances : "<<Sample::getNumInst()<<std::endl;
    return ;
}

void    f1(void)
{
    Sample instance;

    std::cout<<"Number of instances : "<<Sample::getNumInst()<<std::endl;
    f0();

    return ;
}

int main(void)
{
    Sample  instance;

    std::cout<<"Number of instances : "<<Sample::getNumInst()<<std::endl;
    f1();

    return (0);
}