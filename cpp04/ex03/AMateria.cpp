#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type)
{
    std::cout << "Default Constructor for AMateria type: " << this->type << std::endl;
    return ;
}

AMateria::~AMateria(void)
{
    std::cout << "Default Destructor for AMateria type: " << this->type << std::endl;
    return ;
}

std::string const &AMateria::getType(void) const
{
    return this->type;
}

void AMateria::use(__attribute__((unused))ICharacter& target)
{
    return ;
}