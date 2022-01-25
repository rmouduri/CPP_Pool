#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	michael("Michael");
	michael.announce();

	Zombie	*jackson = newZombie("Jackson");
	jackson->announce();
	delete jackson;

	randomChump("Star");
    return 0;
}
