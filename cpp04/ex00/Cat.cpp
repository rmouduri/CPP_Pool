#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Constructor for Cat called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat &newCat): Animal()
{
	std::cout << "Copy Constructor for Cat called" << std::endl;
	this->type = newCat.type;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Destructor for Cat called" << std::endl;
	return ;
}

Cat& Cat::operator=(const Cat& newCat)
{
	std::cout << "Cat Assignement Operator called" << std::endl;
	this->type = newCat.type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "* Meow *" << std::endl;
}