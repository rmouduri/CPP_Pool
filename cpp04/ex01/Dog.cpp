#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
	return ;
}

Dog::Dog(const Dog &newDog): Animal()
{
	std::cout << "Copy Dog Constructor called" << std::endl;
	this->type = newDog.type;
	this->brain = new Brain;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
	return ;
}

Dog& Dog::operator=(const Dog& newDog)
{
	std::cout << "Dog Assignement Operator called" << std::endl;
	this->type = newDog.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain;
	for (int i = 0; i < 100; ++i)
		this->brain->ideas[i] = newDog.brain->ideas[i];
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "* Bark Bark *" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return this->brain;
}

Animal& Dog::operator=(const Animal& newAnimal)
{
	std::cout << "Dog Animal Assignement Operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = newAnimal.getBrain()->ideas[i];	
	return *this;
}