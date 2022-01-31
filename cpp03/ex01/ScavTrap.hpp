#ifndef __SCAVTRAP__
# define __SCAVTRAP__

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	std::string const	_name;
	int					_hitPoints;
	int					_energyPoints;
	int					_attackDamage;

public:
	ScavTrap();
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();

	void guardGate();
};

#endif