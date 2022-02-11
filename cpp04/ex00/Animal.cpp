#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Constructor for Animal called" << std::endl;
	return ;
}

Animal::Animal(const std::string newType): type(newType)
{
	std::cout << "String Constructor for Animal called" << std::endl;
	return ;
}

Animal::Animal(const Animal &newAnimal): type(newAnimal.type)
{
	std::cout << "Copy Constructor for Animal called" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Destructor for Animal called" << std::endl;
	return ;
}

Animal& Animal::operator=(const Animal& newAnimal)
{
	std::cout << "Assignement Operator for Animal called" << std::endl;
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
