#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat Bur("Strongy", 1);
	Bureaucrat weakBureaucrat("Weaky", 150);

	std::cout << std::endl;
	// ShrubberyCreationForm

	ShrubberyCreationForm scf("home"), scfBis(scf);

	std::cout << scf << std::endl << scfBis << std::endl;

	Bur.signForm(scf);

	Bur.executeForm(scf);

	std::cout << scf << std::endl << scfBis << std::endl << std::endl;

	// RobotomyRequestForm

	RobotomyRequestForm rrf("someone"), rrfBis(rrf);	

	std::cout << rrf << std::endl << rrfBis << std::endl;

	Bur.signForm(rrf);	
	
	Bur.executeForm(rrf);

	std::cout << rrf << std::endl << rrfBis << std::endl << std::endl;
	
	// PresidentialPardonForm

	PresidentialPardonForm ppf("someone"), ppfBis(ppf);

	std::cout << ppf << std::endl << ppfBis << std::endl;

	Bur.signForm(ppf);

	Bur.executeForm(ppf);

	std::cout << std::endl;

	weakBureaucrat.executeForm(ppf); // Should give an error: grade of weakBureaucrat too low.

	Bur.executeForm(ppfBis); // Should give an error: form hasn't been signed yet.

	std::cout << std::endl;

	return 0;
}