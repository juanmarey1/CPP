#pragma once

#include "Animal.hpp"

class Cat: public Animal
{

    private:

        Brain   *brain;

    public:

        Cat();
        Cat(const Cat &cat);

        virtual ~Cat();

        Cat &operator = (const Cat &cat);


        Brain   *getBrain(void) const;
        void    makeSound(void) const;

};