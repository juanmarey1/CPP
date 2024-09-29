#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) 
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl; // Dog
    std::cout << i->getType() << " " << std::endl; // Cat

    std::cout << std::endl;

    j->makeSound();  // Dog sound
    i->makeSound();  // Cat sound
    meta->makeSound();  // Animal sound

    std::cout << std::endl;

    delete meta;
    delete j; // Dog
    delete i; // Cat

    std::cout << std::endl;

    // Polymorphism with wrong classes

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << std::endl;

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();  // WrongAnimal sound (not virtual)
    wrongMeta->makeSound();  // WrongAnimal sound

    std::cout << std::endl;

    delete wrongMeta;
    delete wrongCat;

    return (0);
}