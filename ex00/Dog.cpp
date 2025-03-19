#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor\n";
	type = "Dog";
}


Dog& Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		Animal::operator=(dog);
		this->type = dog.type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woff\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor\n";
}