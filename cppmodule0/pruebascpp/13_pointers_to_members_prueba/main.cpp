#include <iostream>
#include "sample.class.hpp"

int main(void)
{
    Sample  example;
    Sample  *example1 = &example;

    int Sample::*p = NULL;
    void    (Sample::*f)(void) const;

    p = &Sample::num;

    std::cout<<"Sample num : "<<example.num<<std::endl;
    example.*p = 21;
    std::cout<<"Sample num : "<<example.num<<std::endl;
    example1->*p = 42;
    std::cout<<"Sample num : "<<example.num<<std::endl;

    f = &Sample::ft_example;
    (example.*f)();
    (example1->*f)();
    return (0);
}