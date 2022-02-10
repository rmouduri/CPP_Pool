#include <iostream>
#include "Bureaucrat.hpp"

using std::exception;

using std::cout; using std::endl; using std::cerr;

int main(void)
{
	Bureaucrat noName;
	Bureaucrat burA("Mike", 1);
	Bureaucrat burB(burA);

	cout << noName << "\n" << burA << "\n" << burB << "\n";

	try
	{
		noName.promote(); // 150 -> 149
		noName.demote(); // 149 -> 150
		noName.demote(); // 150 -> 151 = throw
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		burA.demote(); // 1 -> 2
		burA.promote(); // 2 -> 1
		burA.promote(); // 1 -> 0 = throw
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}