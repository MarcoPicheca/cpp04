#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor\n";
	type = "Cat";
}

void Cat::makeSound() const
{
	std::cout << "Miao\n";
}


Cat& Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		Animal::operator=(cat);
		this->type = cat.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor\n";
}

// test with wrong classes

WrongCat::WrongCat()
{
	std::cout << "Wrong Cat Constructor\n";
	type = "Wrong Cat";
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Miao\n";
}


WrongCat& WrongCat::operator=(const WrongCat& cat)
{
	if (this != &cat)
	{
		WrongAnimal::operator=(cat);
		this->type = cat.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat Destructor\n";
}