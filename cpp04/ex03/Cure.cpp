#include <iostream>
#include "Cure.hpp"

Cure::Cure(void): AMateria("cure"), type("cure")
{
	std::cout << "Default Constructor for Cure called" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Default Destructor for Cure called" << std::endl;
	return ;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{
	return new Cure;
}