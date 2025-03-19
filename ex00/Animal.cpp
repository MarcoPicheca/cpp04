#include "Animal.hpp"

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "I don't know\n";
}

Animal& Animal::operator=(const Animal& animal)
{
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return *this;
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

// test with wrong class

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong I don't know\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return *this;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal Constructor\n";
	type = "Wrong Crocodile";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal Destructor\n";
}