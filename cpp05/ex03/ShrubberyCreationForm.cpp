#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): _target("__unnamed__")
{
	std::cout << "Default Constructor for ShrubberyCreationForm called" << std::endl;

	this->Form::setName("ShrubberyCreationForm");
	this->Form::setSignRequiredGrade(145);
	this->Form::setExecRequiredGrade(137);
	this->setSigned(false);
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): _target(target)
{
	std::cout << "String Constructor for ShrubberyCreationForm called" << std::endl;

	this->Form::setName("ShrubberyCreationForm");
	this->Form::setSignRequiredGrade(145);
	this->Form::setExecRequiredGrade(137);
	this->setSigned(false);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& newShrubberyCreationForm): _target(newShrubberyCreationForm._target)
{
	std::cout << "Copy Constructor for ShrubberyCreationForm called" << std::endl;

	this->Form::setName(newShrubberyCreationForm.getName());
	this->Form::setSignRequiredGrade(newShrubberyCreationForm.getSignRequiredGrade());
	this->Form::setExecRequiredGrade(newShrubberyCreationForm.getExecRequiredGrade());
	this->setSigned(newShrubberyCreationForm.isSigned());
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Default Destructor for ShrubberyCreationForm called" << std::endl;
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& newShrubberyCreationForm)
{
	std::cout << "ShrubberyCreationForm Assignement Operator called" << std::endl;
	
	this->Form::setName(newShrubberyCreationForm.getName());
	this->Form::setSignRequiredGrade(newShrubberyCreationForm.getSignRequiredGrade());
	this->Form::setExecRequiredGrade(newShrubberyCreationForm.getExecRequiredGrade());
	this->setSigned(newShrubberyCreationForm.isSigned());
	this->_target = newShrubberyCreationForm._target;
	return *this;
}

void ShrubberyCreationForm::makeFormAction(void) const
{
	std::ofstream ofs((this->_target + "_shrubbery").c_str(), std::ofstream::out);

	if (!ofs)
		return ;
	ofs << "             /\\\n            <  >\n             \\/\n             /\\\n            /  \\\n           /++++\\\n          /  ()  \\\n          /      \\\n         /~`~`~`~`\\\n        /  ()  ()  \\\n        /          \\\n       /*&*&*&*&*&*&\\\n      /  ()  ()  ()  \\\n      /              \\\n     /++++++++++++++++\\\n    /  ()  ()  ()  ()  \\\n    /                  \\\n   /~`~`~`~`~`~`~`~`~`~`\\\n  /  ()  ()  ()  ()  ()  \\\n  /*&*&*&*&*&*&*&*&*&*&*&\\\n /                        \\\n/,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n           |   |\n          |`````|\n          \\_____/\n";
	ofs.close();
}