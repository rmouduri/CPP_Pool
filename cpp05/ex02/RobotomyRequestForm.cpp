#include <stdlib.h>
#include <time.h>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): _target("__unnamed__")
{
	std::cout << "Default Constructor for RobotomyRequestForm called" << std::endl;

	this->Form::setName("RobotomyRequestForm");
	this->Form::setSignRequiredGrade(72);
	this->Form::setExecRequiredGrade(45);
	this->setSigned(false);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): _target(target)
{
	std::cout << "String Constructor for RobotomyRequestForm called" << std::endl;

	this->Form::setName("RobotomyRequestForm");
	this->Form::setSignRequiredGrade(72);
	this->Form::setExecRequiredGrade(45);
	this->setSigned(false);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& newRobotomyRequestForm): _target(newRobotomyRequestForm._target)
{
	std::cout << "Copy Constructor for RobotomyRequestForm called" << std::endl;

	this->Form::setName(newRobotomyRequestForm.getName());
	this->Form::setSignRequiredGrade(newRobotomyRequestForm.getSignRequiredGrade());
	this->Form::setExecRequiredGrade(newRobotomyRequestForm.getExecRequiredGrade());
	this->setSigned(newRobotomyRequestForm.isSigned());
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Default Destructor for RobotomyRequestForm called" << std::endl;
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& newRobotomyRequestForm)
{
	std::cout << "RobotomyRequestForm Assignement Operator called" << std::endl;
	
	this->Form::setName(newRobotomyRequestForm.getName());
	this->Form::setSignRequiredGrade(newRobotomyRequestForm.getSignRequiredGrade());
	this->Form::setExecRequiredGrade(newRobotomyRequestForm.getExecRequiredGrade());
	this->setSigned(newRobotomyRequestForm.isSigned());
	this->_target = newRobotomyRequestForm._target;
	return *this;
}

void RobotomyRequestForm::makeFormAction(void) const
{
	srand(time(0));

	if (rand() % 2)
		std::cout << "CONGRATULATIONS! " << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "Unfortunately, robotomization has failed" << std::endl;
}
