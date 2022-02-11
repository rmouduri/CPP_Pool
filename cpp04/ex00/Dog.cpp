#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Constructor for Dog called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &newDog): Animal()
{
	std::cout << "Copy Constructor for Dog called" << std::endl;
	this->type = newDog.type;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Destructor for Dog called" << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& newDog)
{
	std::cout << "Dog Assignement Operator called" << std::endl;
	this->type = newDog.type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "* Bark Bark *" << std::endl;
}
