#pragma once

#include <iostream>
#include <string>

class WrongAnimal 
{

    protected:
        std::string type;

    public:

        WrongAnimal();
        WrongAnimal(const WrongAnimal &wrongAnimal);
        
        virtual ~WrongAnimal();
    
        WrongAnimal  &operator = (const WrongAnimal &wrongAnimal);


        std::string     getType(void) const;
        void    makeSound() const;

};