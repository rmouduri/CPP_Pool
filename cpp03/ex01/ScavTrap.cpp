#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): _name(), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ScavTrap " << _name << " created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const name): _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ScavTrap " << _name << " created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy): _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << "ScavTrap " << _name << " created" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " deleted" << std::endl;
	return ;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}