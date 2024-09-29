#include <iostream>
#include "sample.class.hpp"

/*
Una variable con un const es una variable que no puede cambiar de valor, solo se puede asignar a través de un constructor
Una función con un const detrás es una función que no puede alterar los valores de las variables
*/

int main (void)
{
    Sample  example(3.14);
    example.ft_example();
    return (0);
}