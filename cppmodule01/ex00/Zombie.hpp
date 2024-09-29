#pragma once

# include <string>
# include <iostream>

class Zombie
{

    private:

        std::string name;

    public:

        Zombie(std::string  _name);
        ~Zombie();

        void    announce(void) const;

};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);