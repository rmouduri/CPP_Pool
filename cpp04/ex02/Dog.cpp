#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
	return ;
}

Dog::Dog(const Dog &newDog): AAnimal()
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
		this->setIdea(i, newDog.getIdea(i));
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "* Bark Bark *" << std::endl;
}

AAnimal& Dog::operator=(const AAnimal& newAAnimal)
{
	Dog *tmp = dynamic_cast<Dog *>(const_cast<AAnimal *>(&newAAnimal));

	std::cout << "Dog AAnimal Assignement Operator called" << std::endl;
	this->type = tmp->type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain;
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