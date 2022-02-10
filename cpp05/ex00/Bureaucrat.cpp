#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("__noName__"), _grade(150)
{
	std::cout << "Default Constructor for Bureaucrat called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& newBureaucrat) throw()
{
	std::cout << "Copy Constructor for Bureaucrat called" << std::endl;
	*this = newBureaucrat;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) throw(): _name(name), _grade(grade)
{
	return ;
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Default Destructor for Bureaucrat called" << std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& newBureaucrat) throw()
{
	std::cout << "Bureaucrat Assignement Operator called" << std::endl;
	if (newBureaucrat._grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (newBureaucrat._grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	*(std::string *)&this->_name = newBureaucrat.getName();
	this->_grade = newBureaucrat.getGrade();
	return *this;
}

const std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

const int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::promote(void) throw()
{
	std::cout << "promote" << this->getName() << std::endl;
	if (this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	--this->_grade;
}

void Bureaucrat::demote(void) throw()
{
	std::cout << "demote" << this->getName() << std::endl;
	if (this->_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	++this->_grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

std::ostream& operator<<(std::ostream& o, Bureaucrat &outBureaucrat)
{
	o << "Bureaucrat " << outBureaucrat.getName() << " is grade " << outBureaucrat.getGrade() << std::endl;
	return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException()
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException()
{
	return ;
}