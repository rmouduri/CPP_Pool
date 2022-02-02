#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal Constructor called" << std::endl;
	return ;
}

Animal::Animal(const std::string newType): type(newType)
{
	return ;
}

Animal::Animal(const Animal &newAnimal): type(newAnimal.type)
{
	std::cout << "Copy Animal Constructor called" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

Animal& Animal::operator=(const Animal& newAnimal)
{
	std::cout << "Animal Assignement Operator called" << std::endl;
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
