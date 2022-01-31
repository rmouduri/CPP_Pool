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

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, it can't attack lol" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have enough Energy Points !" << std::endl;
		return ;	
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	--this->_energyPoints;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, it can't repair itself lol" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have enough Energy Points !" << std::endl;
		return ;	
	}
	std::cout << "ClapTrap " << this->_name << " is repairing itself, gaining " << amount << " Hit Points back !" << std::endl;
	this->_hitPoints += amount;
	--this->_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, stop hitting it, you monster !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is getting hit for " << ((int)amount > this->_hitPoints ? this->_hitPoints : amount) << " attack damages, it now has " <<
		(this->_hitPoints - amount <= 0 ? 0 : this->_hitPoints - amount) << " hit points left" << std::endl;
	this->_hitPoints -= (int)amount > this->_hitPoints ? this->_hitPoints : amount;
}