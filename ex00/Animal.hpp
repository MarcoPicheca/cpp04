#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>


class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal& operator=(const Animal& animal);
		std::string getType() const;
		virtual void	makeSound() const;
};

class WrongAnimal
{	
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& animal);
		std::string getType() const;
		virtual void	makeSound() const;	
};

#endif