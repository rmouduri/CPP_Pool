#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->_brain = new Brain;
	return ;
}

Dog::Dog(const Dog &newDog)
{
	this->type = newDog.type;
	this->_brain = new Brain;
	return ;
}

Dog::~Dog(void)
{
	if (this->_brain)
		delete this->_brain;
	std::cout << "Dog destroyed." << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& newDog)
{
	std::cout << "Dog cpy" << std::endl;
	this->type = newDog.type;
	*this->_brain = *newDog._brain;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Bark Bark" << std::endl;
}

Brain* Dog::getBrain(void) const
{
	return this->_brain;
}

Animal&	Dog::operator=( const Animal &newAnimal )
{
	std::cout << "Animal assignement operator from Dog" << std::endl;
	this->type = newAnimal.getType();
	*this->_brain = *newAnimal.getBrain();
	return *this;
}