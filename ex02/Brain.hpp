#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(/* args */);
		Brain(const Brain& brain);
		Brain& operator=(const Brain& brain);
		~Brain();
};


#endif