#include <iostream>
#include "sample.class.hpp"

Sample::Sample(int v){
    std::cout<<"Constructor created"<<std::endl;
    this->num = v;
    return ;
}

Sample::~Sample(){
    std::cout<<"Destructor created"<<std::endl;
    return ;
}

int Sample::getNumber(void) const {
    return (this->num);
}

int Sample::compare(Sample * other) const {
    if (this->num > other->getNumber())
        return (1);
    if (this->num < other->getNumber())
        return (-1);
    else
        return (0);
}