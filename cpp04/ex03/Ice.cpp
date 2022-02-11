#include <iostream>
#include "Ice.hpp"

Ice::Ice(void): AMateria("ice"), _type("ice")
{
	std::cout << "Default Constructor for Ice called" << std::endl;
	return ;
}

Ice::Ice(const Ice &newIce): AMateria("ice")
{
	*this = newIce;
	std::cout << "Copy Constructor for Ice called" << std::endl;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Default Destructor for Ice called" << std::endl;
	return ;
}

Ice& Ice::operator=(const Ice& newIce)
{
	*(std::string *)&this->_type = newIce._type;
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