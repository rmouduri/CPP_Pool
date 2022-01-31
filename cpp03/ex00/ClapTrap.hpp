#ifndef __CLAPTRAP__
# define __CLAPTRAP__

# include <iostream>

class ClapTrap
{
private:
	std::string			_name;
	int					_hitPoints;
	int					_energyPoints;
	int					_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap &copy);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif