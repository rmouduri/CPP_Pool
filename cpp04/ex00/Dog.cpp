#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &newDog): Animal()
{
	this->type = newDog.type;
	return ;
}

Dog::~Dog(void)
{
	return ;
}

Dog& Dog::operator=(const Dog& newDog)
{
	this->type = newDog.type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "* Bark Bark *" << std::endl;
}
