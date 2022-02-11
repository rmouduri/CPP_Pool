#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string newType): type(newType)
{
	std::cout << "WrongAnimal String Constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &newWrongAnimal): type(newWrongAnimal.type)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& newWrongAnimal)
{
	std::cout << "WrongAnimal Assignement Operator called" << std::endl;
	this->type = newWrongAnimal.type;
	return *this;
}

const std::string WrongAnimal::getType(void) const
{
	return this->type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "* Wrong Universal Animal Sound *" << std::endl;
}
