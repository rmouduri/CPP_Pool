#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	return ;
}

WrongAnimal::WrongAnimal(const std::string newType): type(newType)
{
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &newWrongAnimal): type(newWrongAnimal.type)
{
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& newWrongAnimal)
{
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
