#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name(), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &copy): _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " deleted" << std::endl;
	return ;
}
