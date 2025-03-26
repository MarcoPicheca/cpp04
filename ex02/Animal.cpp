#include "Animal.hpp"

Animal::Animal()
{
	type = "None";
	std::cout << "Animal def costructor" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	type = animal.type;
	std::cout << "Animal def copy costructor" << std::endl;
}

std::string Animal::getType() const
{
	std::cout << "Animal getter" << std::endl;
	return type;
}

Animal& Animal::operator=(const Animal& animal)
{
	if (this != &animal)
		type = animal.type;
	return *this;
}

void Animal::makeSound() const
{
	if (type.compare("None") == 0)
		std::cout << "Animal def sound" << std::endl;
	else if (type.compare("Cat") == 0)
		std::cout << "Miao" << std::endl;
	else if (type.compare("Dog") == 0)
		std::cout << "Wof" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal def destructor" << std::endl;
}