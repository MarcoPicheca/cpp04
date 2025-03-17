#include "Animal.hpp"

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "I don't know\n";
}

Animal::Animal()
{
	std::cout << "Animal Constructor\n";
	type = "Crocodile";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor\n";
}