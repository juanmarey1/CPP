#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void) : num(0) {
    std::cout<<"Constructor created"<<std::endl;
    return ;
}

Sample::~Sample(void){
    std::cout<<"Destructor created"<<std::endl;
    return ;
}

void    Sample::ft_example(void) const {
    std::cout<<"Member function ft_example called"<<std::endl;
    return ;
}