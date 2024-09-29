#pragma once

#include "Brain.hpp"

class Animal 
{

    protected:
        std::string type;

    public:

        Animal();
        Animal(const Animal &animal);
        
        virtual ~Animal();
    
        Animal  &operator = (const Animal &animal);

  
        std::string     getType(void) const;
        virtual void    makeSound() const;

};