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

Cat::~Cat()
{
	std::cout << "Cat Destructor\n";
}