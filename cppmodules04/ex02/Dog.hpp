#pragma once

#include "AAnimal.hpp"

class Dog: public AAnimal
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