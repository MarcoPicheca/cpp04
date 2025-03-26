#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public virtual Animal
{
	public:
		Dog();
		Dog(const Dog& Dog);
		Dog& operator=(const Dog& dog);
		~Dog();
};

#endif