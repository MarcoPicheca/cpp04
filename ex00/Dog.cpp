#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor\n";
	type = "Dog";
}

void Dog::makeSound() const
{
	std::cout << "Woff\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor\n";
}