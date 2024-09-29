#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void){
    std::cout<<"Constructor created"<<std::endl;

    this->public_num = 0;
    std::cout<<"Public number: "<<this->public_num<<std::endl;

    this->_private_num = 0;
    std::cout<<"Private number: "<<this->_private_num<<std::endl;

    this->public_function();
    this->_private_function();

    return ;
}

Sample::~Sample(void){
    std::cout<<"Destructor created"<<std::endl;
    return ;
}

void    Sample::public_function(void) const {
    std::cout<<"Public function called"<<std::endl;
    return ;
}

void    Sample::_private_function(void) const {
    std::cout<<"Private function called"<<std::endl;
    return ;
}

void    Sample::ft_private_function(void) {
    std::cout<<"We are inside the class"<<std::endl;
    std::cout<<"Private num 1: "<<this->_private_num<<std::endl;
    this->_private_num = 42;
    std::cout<<"Private num 2: "<<this->_private_num<<std::endl;

    this->_private_function();
}