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
	idea = new Brain();
	this->type = "Cat";
	std::cout << "Cat def constructor" << std::endl;
}

Cat::~Cat()
{
	if (idea)
		delete idea;
	std::cout << "Cat def destructor" << std::endl;
}
