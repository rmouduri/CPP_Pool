#include <iostream>
#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;

	if (ac > 1)
		karen.complain(std::string(av[1]));
	else
		std::cout << "Need at least 1 argument" << std::endl;
	return 0;
}