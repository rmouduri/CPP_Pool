#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap()
{
	this->_name = copy._name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " deleted" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is already dead, it can't attack lol" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " doesn't have enough Energy Points !" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	--this->_energyPoints;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " says: \"High Fives Guys !\"" << std::endl;
}