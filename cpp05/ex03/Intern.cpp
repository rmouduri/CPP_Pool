#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Default Constructor for Intern called" << std::endl;
	return ;
}

Intern::Intern(const Intern& newIntern)
{
	std::cout << "Copy Constructor for Intern called" << std::endl;
	(void)newIntern;
	return ;
}

Intern::~Intern(void)
{
	std::cout << "Default Destructor for Intern called" << std::endl;
	return ;
}

Intern& Intern::operator=(const Intern& newIntern)
{
	std::cout << "Intern Assignement Operator called" << std::endl;
	(void)newIntern;
	return *this;
}

Form *Intern::makeShrubberyForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	std::string names[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	Form *(Intern::*tab[3])(std::string target) = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentialForm};

	try {
		for (int i = 0; i < 3; ++i) {
			if (formName.compare(names[i]) == 0) {
				std::cout << "Intern creates " << formName << std::endl;
				return (this->*tab[i])(target);
			}
		}
		throw Intern::InvalidFormException();
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return NULL;
}

const char *Intern::InvalidFormException::what(void) const throw()
{
	return ("Invalid Form Name");
}