#include "Cat.hpp"

Cat::Cat(const Cat& cat) : Animal()
{
	this->type = cat.type;
	std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		this->type = cat.type;
		std::cout << "Cat copy constructor" << std::endl;
	}
	return *this;
}

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat def constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat def destructor" << std::endl;
}
