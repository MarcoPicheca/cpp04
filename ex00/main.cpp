#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
	
	meta->makeSound();
    i->makeSound();
    j->makeSound();
    delete meta;
    delete j;
    delete i;

    return 0;
}
