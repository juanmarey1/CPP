#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("mondongo");
    ScavTrap scavtrap("Katia");
    std::cout << std::endl;

    claptrap.attack("pera");
    claptrap.takeDamage(5);
    claptrap.beRepaired(6);
    claptrap.beRepaired(6);
    claptrap.attack("pera");
    claptrap.takeDamage(7);
    claptrap.attack("pera");
    claptrap.beRepaired(2);

    std::cout << std::endl;

    scavtrap.attack("salamalekum");
    scavtrap.takeDamage(50);
    scavtrap.guardGate();
    scavtrap.beRepaired(200);
    scavtrap.takeDamage(200);
    for (int i = 0; i < 50 ; i++)
        scavtrap.attack("Salamalekum");
    scavtrap.takeDamage(2000);
    scavtrap.beRepaired(100);
    scavtrap.guardGate();

    std::cout << std::endl;

    return (0);
}