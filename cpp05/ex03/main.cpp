#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void runTest(std::string const& name, int grade)
{
	Intern  slave;
	Form* f = NULL;

	try {
		std::cout << std::endl << "< " << name << "'s test >" << std::endl;

		Bureaucrat bure(name, grade);

		//Shrubbery

		std::cout << bure << std::endl;
		f = slave.makeForm("Shrubbery Creation", name);
		std::cout << *f << std::endl;
		bure.signForm(*f);
		bure.executeForm(*f);
		f->execute(bure);
		std::cout << *f << std::endl;

		delete f;
		f = NULL;
		std::cout << std::endl;

		//Robotomy

		f = slave.makeForm("Robotomy Request", name);
		std::cout << *f << std::endl;
		bure.signForm(*f);
		bure.executeForm(*f);
		f->execute(bure);
		std::cout << *f << std::endl;

		delete f;
		f = NULL;
		std::cout << std::endl;

		//Presidential

		f = slave.makeForm("Presidential Pardon", name);
		std::cout << *f << std::endl;
		bure.signForm(*f);
		bure.executeForm(*f);
		f->execute(bure);
		std::cout << *f << std::endl;

		delete f;
		f = NULL;
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl << std::endl;
		delete f;
	}
}

int main()
{
	runTest("Bureaucrat_0", 0);
		std::cout << std::endl << "-----------------------------------------------------" << std::endl << std::endl;
	runTest("Bureaucrat_1", 1);
		std::cout << std::endl << "-----------------------------------------------------" << std::endl << std::endl;
	runTest("Bureaucrat_2", 5);
		std::cout << std::endl << "-----------------------------------------------------" << std::endl << std::endl;
	runTest("Bureaucrat_3", 25);
		std::cout << std::endl << "-----------------------------------------------------" << std::endl << std::endl;
	runTest("Bureaucrat_4", 45);
		std::cout << std::endl << "-----------------------------------------------------" << std::endl << std::endl;
	runTest("Bureaucrat_5", 72);
		std::cout << std::endl << "-----------------------------------------------------" << std::endl << std::endl;
	runTest("Bureaucrat_6", 137);
		std::cout << std::endl << "-----------------------------------------------------" << std::endl << std::endl;
	runTest("Bureaucrat_7", 145);
		std::cout << std::endl << "-----------------------------------------------------" << std::endl << std::endl;
	runTest("Bureaucrat_8", 150);
		std::cout << std::endl << "-----------------------------------------------------" << std::endl << std::endl;
	runTest("Bureaucrat_9", 999);
	return (0);
}