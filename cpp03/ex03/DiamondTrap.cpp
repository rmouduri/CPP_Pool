#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = ClapTrap::_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const name)
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	this->_name = copy._name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " deleted" << std::endl;
	return ;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and my ClapTrap's name is " << ClapTrap::_name << std::endl;
}