#include "Brain.hpp"

Brain::Brain(void)
{
	return ;
}

Brain::Brain(const Brain &newBrain)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = newBrain.ideas[i];
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
	return ;
}

Brain& Brain::operator=(const Brain &newBrain)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = newBrain.ideas[i];
	return *this;
}
