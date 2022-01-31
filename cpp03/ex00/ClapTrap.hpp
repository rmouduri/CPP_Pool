#ifndef __CLAPTRAP__
# define __CLAPTRAP__

# include <iostream>

class ClapTrap
{
private:
	std::string const	_name;
	int					_hitPoints;
	int					_energyPoints;
	int					_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();

};

#endif