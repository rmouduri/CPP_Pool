#include <iostream>
#include "Ice.hpp"

Ice::Ice(void): AMateria("ice"), type("ice")
{
	std::cout << "Default Constructor for Ice called" << std::endl;
	return ;
}

Ice::Ice(__attribute((unused))const Ice& newIce): AMateria("ice"), type("ice")
{
	std::cout << "Copy Constructor for Ice called" << std::endl;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Default Destructor for Ice called" << std::endl;
	return ;
}

Ice& Ice::operator=(__attribute((unused))const Ice& newIce)
{
	std::cout << "Ice Assignement Operator called" << std::endl;
	return *this;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone(void) const
{
	return new Ice;
}