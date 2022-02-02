#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat &newCat): Animal()
{
	this->type = newCat.type;
	return ;
}

Cat::~Cat(void)
{
	return ;
}

Cat& Cat::operator=(const Cat& newCat)
{
	this->type = newCat.type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "* Meow *" << std::endl;
}
