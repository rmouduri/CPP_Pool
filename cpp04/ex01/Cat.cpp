#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat Constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
	return ;
}

Cat::Cat(const Cat &newCat): Animal()
{
	std::cout << "Copy Cat Constructor called" << std::endl;
	this->type = newCat.type;
	this->brain = new Brain;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
	return ;
}

Cat& Cat::operator=(const Cat& newCat)
{
	std::cout << "Cat Assignement Operator called" << std::endl;
	this->type = newCat.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain;
	for (int i = 0; i < 100; ++i)
		this->brain->ideas[i] = newCat.brain->ideas[i];
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "* Meow *" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return this->brain;
}

Animal& Cat::operator=(const Animal& newAnimal)
{
	std::cout << "Cat Animal Assignement Operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = newAnimal.getBrain()->ideas[i];	
	return *this;
}