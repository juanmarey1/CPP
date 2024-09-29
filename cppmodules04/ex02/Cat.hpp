#pragma once

#include "AAnimal.hpp"

class Cat: public AAnimal
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