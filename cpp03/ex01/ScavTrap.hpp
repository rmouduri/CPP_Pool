#ifndef __SCAVTRAP__
# define __SCAVTRAP__

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();

	void attack(const std::string &target);
	void guardGate();
};

#endif