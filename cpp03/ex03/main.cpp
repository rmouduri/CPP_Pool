#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("CL4PTP");

	std::cout << std::endl;

	a.attack("Norbert");

	std::cout << std::endl;

	a.beRepaired(5);

	std::cout << std::endl;

	a.takeDamage(999);

	std::cout << std::endl;

	// for (int i = 0; i < 1; ++i)
	// 	a.attack("Norbert");

	std::cout << std::endl;

	a.attack("Norbert");
	a.beRepaired(5);

	std::cout << std::endl;
   
	a.highFivesGuys();

	std::cout << std::endl;

	a.whoAmI();

	std::cout << std::endl;

	return 0;
}