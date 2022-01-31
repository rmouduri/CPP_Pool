#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("Jean");
	FragTrap b(a);
	FragTrap c;

	std::cout << std::endl;

	a.attack("Norbert");
	b.attack("Pascal");
	c.attack("Hugues");

	std::cout << std::endl;

	a.beRepaired(5);
	b.beRepaired(10);
	c.beRepaired(15);

	std::cout << std::endl;

	a.takeDamage(999);
	b.takeDamage(10);
	c.takeDamage(5);

	std::cout << std::endl;

	for (int i = 0; i < 1; ++i)
		b.attack("Norbert");

	std::cout << std::endl;

	a.attack("Norbert");
	a.beRepaired(5);

	std::cout << std::endl;
   
	a.highFivesGuys();

	std::cout << std::endl;

	return 0;
}