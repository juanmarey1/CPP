#include <iostream>
#include "sample.class.hpp"

Sample::Sample() {
    std::cout<<"Constructor called"<<std::endl;
    this->_NumInst++;
    return ;
}

Sample::~Sample() {
    std::cout<<"Destructor called"<<std::endl;
    this->_NumInst--;
    return ;
}

int Sample::getNumInst() {
    return (Sample::_NumInst);
}

int Sample::_NumInst = 0;