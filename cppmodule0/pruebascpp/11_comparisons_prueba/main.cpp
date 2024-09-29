#include <iostream>
#include "sample.class.hpp"

/*
In order to compare private numbers from different classes.
Instances although may be structurally equal, are not physically equal.
*/

int main(void)
{
    Sample  example1(1);
    Sample  example2(-1);

    if (example1.compare(&example2) == 1)
        std::cout<<"Num 1 is bigger than 2"<<std::endl;
    else if (example1.compare(&example2) == 0)
        std::cout<<"Num 1 is equal to 2"<<std::endl;
    else
        std::cout<<"Num 1 is smaller than 2"<<std::endl;

    return (0);
}