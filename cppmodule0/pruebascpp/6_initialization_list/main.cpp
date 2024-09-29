#include <iostream>
#include "sample.class1.hpp"
#include "sample.class2.hpp"

/*
Two ways of declaring variables in the constructor of a class
*/

int main(void)
{
    Sample1  example1('J', 42, 4.2);
    Sample2  example2('j', 420, 0.42);

    return (0);
}