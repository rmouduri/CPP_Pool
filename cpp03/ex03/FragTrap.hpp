#ifndef __FRAGTRAP__
# define __FRAGTRAP__

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string const name);
	FragTrap(FragTrap const &copy);
	~FragTrap();

	void attack(const std::string &target);
	void highFivesGuys(void);
};

#endif