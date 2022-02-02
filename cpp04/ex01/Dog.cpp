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
	for (int i = 0; i < 100; ++i)
		this->setIdea(i, newDog.getIdea(i));
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "* Bark Bark *" << std::endl;
}

Animal& Dog::operator=(const Animal& newAnimal)
{
	Dog *tmp = dynamic_cast<Dog *>(const_cast<Animal *>(&newAnimal));

	std::cout << "Dog Animal Assignement Operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->setIdea(i, tmp->getIdea(i));
	return *this;
}

void Dog::setIdea(int index, std::string newIdea)
{
	this->brain->ideas[index] = newIdea;
}

const std::string Dog::getIdea(int index) const
{
	return this->brain->ideas[index];
}