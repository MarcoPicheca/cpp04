#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* meta[10];

	size_t i = 0;

	while (i < 10)
	{
		if (i < 5)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
		i++;
	}
	i = 0;
	while(i < 10)
	{
		if (i < 5)
		{
			meta[i]->makeSound();
			delete meta[i];
		}
		else
		{
			meta[i]->makeSound();
			delete meta[i];
		}
		i++;
	}
	return 0;
}
