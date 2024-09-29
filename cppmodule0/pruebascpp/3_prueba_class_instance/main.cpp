#include "sample.class.hpp"
#include <iostream>

/*
-A class is defined like this:

 /////CLASS.HPP FILE: ///////

class X {
    X(); <-- Constructor
    ~X(); <-- Destructor
};

 /////CLASS.CPP FILE: ///////

X::X(){
Constructor
}

X::~X(){
Destructor
}



//INSTANCE OF A CLASS --> Sample perro; --> We create the memory for the object perro (which is an instance for the class Sample)
*/

int main(void)
{
    Sample  perro;
    std::cout<<"sexooo"<<std::endl;
    return (0);
}