#pragma once

# include <string>
# include <iostream>

class Zombie
{

    private:

        std::string name;

    public:

        Zombie();
        ~Zombie();

        void    announce(void) const;
        void    set_name(std::string _name);

};

Zombie  *zombieHorde(int N, std::string name);