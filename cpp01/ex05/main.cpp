#include <iostream>
#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;

	if (ac > 1)
		karen.complain((std::string)(av[1]));
	return 0;
}