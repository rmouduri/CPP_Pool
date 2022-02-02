#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &newWrongCat): WrongAnimal()
{
	this->type = newWrongCat.type;
	return ;
}

WrongCat::~WrongCat(void)
{
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& newWrongCat)
{
	this->type = newWrongCat.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "* Wrong Meow *" << std::endl;
}
