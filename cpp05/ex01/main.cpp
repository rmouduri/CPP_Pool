#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat burA("Mike", 1);
	Form f, f2("Social Security Form", 1, 1), f2bis(f2);

	std::cout << std::endl <<
			f << std::endl <<
			f2 << std::endl <<
			f2bis << std::endl << std::endl;

	burA.signForm(f2); // okay: f2's signGrade is 1, and burA's grade is 1 too

	std::cout << f2 << std::endl; // should be signed

	burA.demote(); // 1 -> 2

	burA.signForm(f2bis); // f2's signGrade is 1, so this is an error

	// invalid grade in form constructor

	std::cout << std::endl;

	try {
		Form f("invalid form", 1, 151); // grade too low
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Form f("invalid form", 0, 50); // grade too high
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl << std::endl;
	}

	return 0;
}