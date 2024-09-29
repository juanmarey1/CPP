#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void)
{
    std::cout<<"Constructor created"<<std::endl;
    return ;
}

Sample::~Sample(void)
{
    std::cout<<"Destructor created"<<std::endl;
    return ;
}

int Sample::getNum(void) const {
    std::cout<<"The num is : "<<this->num<<std::endl;
    return (this->num);
}

void    Sample::setNum(int n) {
    if (n > 0)
        this->num = n;
    std::cout<<"The num you set is : "<<this->num<<std::endl;
    return ;
}