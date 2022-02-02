#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat Constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
	return ;
}

Cat::Cat(const Cat &newCat): AAnimal()
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
	for (int i = 0; i < 100; ++i)
		this->setIdea(i, newCat.getIdea(i));
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "* Meow *" << std::endl;
}

AAnimal& Cat::operator=(const AAnimal& newAAnimal)
{
	Cat tmp = *dynamic_cast<Cat *>(const_cast<AAnimal *>(&newAAnimal));

	std::cout << "Cat AAnimal Assignement Operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->setIdea(i, tmp.getIdea(i));
	return *this;
}

void Cat::setIdea(int index, std::string newIdea)
{
	this->brain->ideas[index] = newIdea;
}

const std::string Cat::getIdea(int index) const
{
	return this->brain->ideas[index];
}