#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public virtual Animal
{
	private:
		Brain *idea;
	public:
		Dog();
		Dog(const Dog& Dog);
		Dog& operator=(const Dog& dog);
		~Dog();
};

#endif