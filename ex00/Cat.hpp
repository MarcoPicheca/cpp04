#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat& operator=(const Cat& cat);
		void	makeSound() const;
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat& operator=(const WrongCat& cat);
		void	makeSound() const;
};

#endif