#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public virtual Animal
{
	private:
		Brain *idea;
	public:
		Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		~Cat();
};

#endif