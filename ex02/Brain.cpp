#include "Brain.hpp"

Brain::Brain(const Brain& brain)
{
	size_t i = -1;
	while (++i < 100)
		this->ideas[i] = brain.ideas[i];
	std::cout << "Copy brain costructor" << std::endl;	
}

Brain& Brain::operator=(const Brain& brain)
{
	if (this != &brain)
	{
		size_t i = -1;
		while (++i < 100)
			this->ideas[i] = brain.ideas[i];		
	}
	return *this;
}

Brain::Brain(/* args */)
{
	std::cout << "Brain Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}
