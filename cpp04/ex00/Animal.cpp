#include "Animal.hpp"

Animal::Animal(void)
{
	return ;
}

Animal::Animal(const std::string newType): type(newType)
{
	return ;
}

Animal::Animal(const Animal &newAnimal): type(newAnimal.type)
{
	return ;
}

Animal::~Animal(void)
{
	return ;
}

Animal& Animal::operator=(const Animal& newAnimal)
{
	this->type = newAnimal.type;
	return *this;
}

const std::string Animal::getType(void) const
{
	return this->type;
}

void Animal::makeSound(void) const
{
	std::cout << "* Universal Animal Sound *" << std::endl;
}
