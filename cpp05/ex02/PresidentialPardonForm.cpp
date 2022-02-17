#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): _target("__unnamed__")
{
	std::cout << "Default Constructor for PresidentialPardonForm called" << std::endl;

	this->Form::setName("PresidentialPardonForm");
	this->Form::setSignRequiredGrade(25);
	this->Form::setExecRequiredGrade(5);
	this->setSigned(false);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): _target(target)
{
	std::cout << "String Constructor for PresidentialPardonForm called" << std::endl;

	this->Form::setName("PresidentialPardonForm");
	this->Form::setSignRequiredGrade(25);
	this->Form::setExecRequiredGrade(5);
	this->setSigned(false);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& newPresidentialPardonForm): _target(newPresidentialPardonForm._target)
{
	std::cout << "Copy Constructor for PresidentialPardonForm called" << std::endl;

	this->Form::setName(newPresidentialPardonForm.getName());
	this->Form::setSignRequiredGrade(newPresidentialPardonForm.getSignRequiredGrade());
	this->Form::setExecRequiredGrade(newPresidentialPardonForm.getExecRequiredGrade());
	this->setSigned(newPresidentialPardonForm.isSigned());
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Default Destructor for PresidentialPardonForm called" << std::endl;
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& newPresidentialPardonForm)
{
	std::cout << "PresidentialPardonForm Assignement Operator called" << std::endl;
	
	this->Form::setName(newPresidentialPardonForm.getName());
	this->Form::setSignRequiredGrade(newPresidentialPardonForm.getSignRequiredGrade());
	this->Form::setExecRequiredGrade(newPresidentialPardonForm.getExecRequiredGrade());
	this->setSigned(newPresidentialPardonForm.isSigned());
	this->_target = newPresidentialPardonForm._target;
	return *this;
}

void PresidentialPardonForm::makeFormAction(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}