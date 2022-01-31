#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Jean");
	ClapTrap b(a);
	ClapTrap c;

	std::cout << std::endl;

	a.attack("Norbert");
	b.attack("Pascal");
	c.attack("Hugues");

	std::cout << std::endl;

	a.beRepaired(5);
	b.beRepaired(10);
	c.beRepaired(15);

	std::cout << std::endl;

	a.takeDamage(15);
	b.takeDamage(10);
	c.takeDamage(5);

	std::cout << std::endl;

	b.attack("Norbert");
	b.attack("Norbert");
	b.attack("Norbert");
	b.attack("Norbert");
	b.attack("Norbert");
	b.attack("Norbert");
	b.attack("Norbert");
	b.attack("Norbert");
	b.attack("Norbert");

	std::cout << std::endl;

	a.attack("Norbert");
	a.beRepaired(5);

	std::cout << std::endl;
   
	return 0;
}