#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
    std::cout << "Destroyed: " << this->_type << std::endl;
	return ;
}

const std::string& Weapon::getType(void) const
{
    return this->_type;
}

void Weapon::setType(std::string type)
{
    std::cout << "Old: " << this->_type << std::endl;
    this->_type = type;
    std::cout << "Init: " << this->_type << std::endl;
}