#include <iostream>
#include "sample.class.hpp"

/*
In all classes with private numbers::
    1. ft_setNum(int n);
    2. ft_getNum();
*/

int main(void)
{
    Sample example;
    int n;

    example.setNum(5);
    example.setNum(-5);
    n = example.getNum();
    std::cout<<"The number obtained in main is : "<<n<<std::endl;
    return (0);
}