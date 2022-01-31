#ifndef __DIAMONDTRAP__
# define __DIAMONDTRAP__

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string const name);
	DiamondTrap(DiamondTrap const &copy);
	~DiamondTrap();

	void whoAmI();
};

#endif