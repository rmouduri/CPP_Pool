#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde = zombieHorde(10, "Dominic Toretto");

	delete [] horde;
    return 0;
}
