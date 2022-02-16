#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat noName;
	Bureaucrat burA("Mike", 1);
	Bureaucrat burB(burA);

	std::cout << std::endl << noName << std::endl << burA << std::endl << burB << std::endl << std::endl;

	try
	{
		noName.promote(); // 150 -> 149
		noName.demote(); // 149 -> 150
		noName.demote(); // 150 -> 151 = throw
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	try
	{
		burA.demote(); // 1 -> 2
		burA.promote(); // 2 -> 1
		burA.promote(); // 1 -> 0 = throw
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	return 0;
}