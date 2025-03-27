#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	const Animal *metaDog = new Dog();
	const Animal *metaCat = new Cat();
	std::cout << "sound of Dog: ";
	metaDog->makeSound();
	std::cout << "sound of Cat: ";
	metaCat->makeSound();
	delete metaDog;
	delete metaCat;
	return 0;
}
