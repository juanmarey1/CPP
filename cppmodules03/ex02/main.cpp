#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap claptrap("mondongo");
    ScavTrap scavtrap("Katia");
    FragTrap fragtrap("domingo");
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

    fragtrap.attack("maricarmen");
    fragtrap.takeDamage(50);
    fragtrap.highFivesGuys();
    fragtrap.beRepaired(50);
    for(int i = 0; i < 100; i++)
        fragtrap.attack("maripili");
    fragtrap.takeDamage(200);
    fragtrap.beRepaired(100);
    fragtrap.highFivesGuys();

    std::cout << std::endl;

    return (0);
}