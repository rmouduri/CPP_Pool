#include <iostream>
#include "Cure.hpp"

Cure::Cure(void): type("cure")
{
	std::cout << "Default Constructor for Cure called" << std::endl;
	return ;
}

Cure::Cure(const Cure& newCure): type("cure")
{
	std::cout << "Copy Constructor for Cure called" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Default Destructor for Cure called" << std::endl;
	return ;
}

Cure& Cure::operator=(const Cure& newCure)
{
	std::cout << "Cure Assignement Operator called" << std::endl;
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}