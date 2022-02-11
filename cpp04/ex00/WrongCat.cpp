#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &newWrongCat): WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	this->type = newWrongCat.type;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& newWrongCat)
{
	std::cout << "WrongCat Assignement Operator called" << std::endl;
	this->type = newWrongCat.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "* Wrong Meow *" << std::endl;
}
