#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


/////// TESTER ////////



#include <memory>  // For smart pointers

void testBasicFunctionality() {
    std::cout << std::endl;
    std::cout << "== Basic Functionality Test ==" << std::endl;

    Dog dog1;
    Cat cat1;

    std::cout << std::endl;

    std::cout << "Dog's sound: ";
    dog1.makeSound();

    std::cout << "Cat's sound: ";
    cat1.makeSound();

    std::cout << "Dog's type: " << dog1.getType() << std::endl;
    std::cout << "Cat's type: " << cat1.getType() << std::endl;

    std::cout << std::endl;
}

void testPolymorphism() {
    std::cout << std::endl;
    std::cout << "== Polymorphism Test ==" << std::endl;

    const Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    std::cout << std::endl;

    for (int i = 0; i < 4; ++i) {
        animals[i]->makeSound();
    }

    std::cout << std::endl;

    for (int i = 0; i < 4; ++i) {
        delete animals[i];  // Proper destruction order must be shown here
    }
    std::cout << std::endl;
}

void testDeepCopy() {
    std::cout << std::endl;
    std::cout << "== Deep Copy Test ==" << std::endl;

    std::cout << std::endl;
    Dog dog1;
    dog1.getBrain()->ideas[0] = "Chase the cat!";
    dog1.getBrain()->ideas[1] = "Eat food!";
    std::cout << std::endl;

    // Perform deep copy
    Dog dog2(dog1);

    std::cout << std::endl;
    std::cout << "Original Dog's first idea: " << dog1.getBrain()->ideas[0] << std::endl;
    std::cout << "Copied Dog's first idea: " << dog2.getBrain()->ideas[0] << std::endl;
    std::cout << std::endl;

    dog2.getBrain()->ideas[0] = "Sleep all day!";
    std::cout << std::endl;

    std::cout << "Original Dog's first idea after modification: " << dog1.getBrain()->ideas[0] << std::endl;
    std::cout << "Copied Dog's first idea after modification: " << dog2.getBrain()->ideas[0] << std::endl;

    std::cout << std::endl;
}

void testAssignmentOperator() {
    std::cout << std::endl;
    std::cout << "== Assignment Operator Test ==" << std::endl;

    std::cout << std::endl;
    Dog dog1;
    Dog dog2;
    dog1.getBrain()->ideas[0] = "Guard the house";
    dog2 = dog1;  // Assignment
    std::cout << std::endl;

    std::cout << "Dog1's first idea: " << dog1.getBrain()->ideas[0] << std::endl;
    std::cout << "Dog2's first idea: " << dog2.getBrain()->ideas[0] << std::endl;
    std::cout << std::endl;

    dog2.getBrain()->ideas[0] = "Run in the park";
    std::cout << std::endl;

    std::cout << "Dog1's first idea after modification: " << dog1.getBrain()->ideas[0] << std::endl;
    std::cout << "Dog2's first idea after modification: " << dog2.getBrain()->ideas[0] << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
}

void testMemoryLeaks() {
    std::cout << "== Memory Leak Test ==" << std::endl;

    Animal* animals[100];
    std::cout << std::endl;

    // Create 50 Dogs and 50 Cats
    for (int i = 0; i < 50; ++i) {
        animals[i] = new Dog();
    }
    std::cout << std::endl;
    for (int i = 50; i < 100; ++i) {
        animals[i] = new Cat();
    }
    std::cout << std::endl;

    // Delete all animals
    for (int i = 0; i < 100; ++i) {
        delete animals[i];  // Destructors must be called
    }

    std::cout << std::endl;
}

int main() {
    std::cout << "=== Extensive Tester for Animal, Dog, Cat, and Brain ===" << std::endl;

    testBasicFunctionality();
    testPolymorphism();
    testDeepCopy();
    testAssignmentOperator();
    testMemoryLeaks();

    std::cout << "=== All Tests Completed ===" << std::endl;

    return 0;
}



////// MY TESTER ///////


/* int main(void) 
{
    Animal* animals[4];

    // Half will be Dogs, the other half Cats
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();

    std::cout << std::endl;

    // Print sounds
    for (int i = 0; i < 4; ++i) {
        animals[i]->makeSound();
    }

    std::cout << std::endl;

    // Delete all animals and ensure destructors are called correctly
    for (int i = 0; i < 4; ++i) {
        delete animals[i];
    }

    return 0;
} */