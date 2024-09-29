#pragma once

#include "Brain.hpp"

class AAnimal 
{

    protected:
        std::string type;

    public:

        AAnimal();
        AAnimal(const AAnimal &animal);
        
        virtual ~AAnimal();
    
        AAnimal  &operator = (const AAnimal &animal);

  
        std::string     getType(void) const;
        virtual void    makeSound() const = 0;

};