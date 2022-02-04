#include <iostream>
#include <stdlib.h>
#include "Fixed.hpp"
#include "Point.hpp"

int main(int ac, char **av)
{
	if (ac == 9)
	{
		Fixed xa(strtof(av[1], NULL));
		Fixed ya(strtof(av[2], NULL));
		Fixed xb(strtof(av[3], NULL));
		Fixed yb(strtof(av[4], NULL));
		Fixed xc(strtof(av[5], NULL));
		Fixed yc(strtof(av[6], NULL));
		Fixed xp(strtof(av[7], NULL));
		Fixed yp(strtof(av[8], NULL));

		Point a(xa, ya);
		Point b(xb, yb);
		Point c(xc, yc);
		Point p(xp, yp);

		// Point a(strtof(av[1], NULL), strtof(av[2], NULL));
		// Point b(strtof(av[3], NULL), strtof(av[4], NULL));
		// Point c(strtof(av[5], NULL), strtof(av[6], NULL));
		// Point p(strtof(av[7], NULL), strtof(av[8], NULL));


		std::cout << (bsp(a, b, c, p) == true ? "True" : "False") << std::endl;
	}
	else
		std::cout << "Need 8 args" << std::endl;
	return 0;
}