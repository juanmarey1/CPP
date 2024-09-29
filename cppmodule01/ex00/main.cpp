#include "Zombie.hpp"

int main(void)
{
    Zombie  *HeapZombie;

    HeapZombie = newZombie("HeapZombie");
    HeapZombie->announce();
    delete  HeapZombie;

    randomChump("StackZombie");

    return (0);
}

/*
    Stack Zombie: 
        +Automatically created and automatically destroyed, Avoid new/delete
        -You cannot choose where to destroy it

    Heap Zombie:
        +When zombie needs to persist outside scope (you can destroy it whenever you want)
        -You have to avoid memory leaks
*/