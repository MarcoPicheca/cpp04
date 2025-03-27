#include "Dog.hpp"

Dog::Dog(const Dog& dog) : Animal()
{
	this->type = dog.type;
	std::cout << "Dog copy constructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wof abstract" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		this->type = dog.type;
		std::cout << "dog copy constructor" << std::endl;
	}
	return *this;
}

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog def constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog def destructor" << std::endl;
}
