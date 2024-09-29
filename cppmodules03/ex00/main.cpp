#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Clappy");

    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(6);
    claptrap.beRepaired(6);
    claptrap.attack("enemy");
    claptrap.takeDamage(7);
    claptrap.attack("enemy");
    claptrap.beRepaired(2);

    return (0);
}