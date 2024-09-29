#pragma once

#include "Animal.hpp"

class Dog: public Animal
{

    private:

        Brain   *brain;

    public:

        Dog();
        Dog(const Dog &dog);

        virtual ~Dog();

        Dog &operator = (const Dog &dog);


        Brain   *getBrain(void) const;
        void    makeSound(void) const;

};