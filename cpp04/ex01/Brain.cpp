#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain Constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = brain.ideas[i];
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Brain Assignement Operator called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = brain.ideas[i];
	return *this;
}