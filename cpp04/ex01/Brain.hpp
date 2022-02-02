#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain &brain);
	~Brain();

	Brain& operator=(const Brain &brain);
	std::string ideas[100];
};

# endif //__BRAIN_HPP__