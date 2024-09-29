#include "Zombie.hpp"

int main(void)
{
    Zombie      *zombie_horde;
    int         N = 10;
    std::string name = "Jacobo";

    zombie_horde = zombieHorde(N, name);
    if (zombie_horde == NULL)
        std::cout << "Failed to create the zombie horde" << std::endl;
    else
    {
        delete [] zombie_horde;
    }
    return (0);
}