#include <iostream>
#include "Cure.hpp"

Cure::Cure(void): AMateria("cure"), _type("cure")
{
	std::cout << "Default Constructor for Cure called" << std::endl;
	return ;
}

Cure::Cure(const Cure &newCure): AMateria("cure")
{
	*this = newCure;
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
	*(std::string *)&this->_type = newCure._type;
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