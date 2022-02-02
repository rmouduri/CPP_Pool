#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Default AAnimal Constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const std::string newType): type(newType)
{
	return ;
}

AAnimal::AAnimal(const AAnimal &newAAnimal): type(newAAnimal.type)
{
	std::cout << "Copy AAnimal Constructor called" << std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Destructor called" << std::endl;
	return ;
}

AAnimal& AAnimal::operator=(const AAnimal& newAAnimal)
{
	std::cout << "AAnimal Assignement Operator called" << std::endl;
	this->type = newAAnimal.type;
	return *this;
}

const std::string AAnimal::getType(void) const
{
	return this->type;
}

void AAnimal::makeSound(void) const
{
	std::cout << "* Universal AAnimal Sound *" << std::endl;
}
