#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain &newBrain);
	~Brain();

	Brain& operator=(const Brain &newBrain);

	std::string ideas[100];
};

#endif