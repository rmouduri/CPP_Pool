#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
    std::cout << "Default Constructor for AMateria type: " << this->_type << std::endl;
    return ;
}

AMateria::~AMateria(void)
{
    std::cout << "Default Destructor for AMateria type: " << this->_type << std::endl;
    return ;
}

std::string const &AMateria::getType(void) const
{
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout << "AMateria use() function called" << std::endl;
    return ;
}