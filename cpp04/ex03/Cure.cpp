#include <iostream>
#include "Cure.hpp"

Cure::Cure(void): AMateria("cure"), type("cure")
{
	std::cout << "Default Constructor for Cure called" << std::endl;
	return ;
}

Cure::Cure(__attribute((unused))const Cure& newCure): AMateria("cure"), type("cure")
{
	std::cout << "Copy Constructor for Cure called" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Default Destructor for Cure called" << std::endl;
	return ;
}

Cure& Cure::operator=(__attribute((unused))const Cure& newCure)
{
	std::cout << "Cure Assignement Operator called" << std::endl;
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{
	return new Cure;
}