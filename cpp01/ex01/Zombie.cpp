#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
	return ;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName(std::string name)
{
	this->_name = name;
}