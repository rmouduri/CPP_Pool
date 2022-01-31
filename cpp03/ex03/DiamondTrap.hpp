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

	DiamondTrap& operator=(const DiamondTrap &copy);

	void whoAmI();
	void attack(const std::string &target);
};

#endif