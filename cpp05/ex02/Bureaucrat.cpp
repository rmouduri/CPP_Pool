#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("__noName__"), _grade(150)
{
	std::cout << "Default Constructor for Bureaucrat called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& newBureaucrat): _name(newBureaucrat.getName())
{
	std::cout << "Copy Constructor for Bureaucrat called" << std::endl;
	checkGrade(newBureaucrat.getGrade());
	this->_grade = newBureaucrat.getGrade();
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException):
	_name(name)
{
	std::cout << "Arguments Constructor for Bureaucrat called" << std::endl;
	checkGrade(grade);
	this->_grade = grade;
	return ;
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Default Destructor for Bureaucrat called" << std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& newBureaucrat)
{
	std::cout << "Bureaucrat Assignement Operator called" << std::endl;
	checkGrade(newBureaucrat.getGrade());
	this->_grade = newBureaucrat.getGrade();
	*(std::string *)&this->_name = newBureaucrat.getName();
	return *this;
}

const std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::promote(void)
{
	checkGrade(this->_grade - 1);
	std::cout << "promote " << this->getName() << std::endl;
	--this->_grade;
}

void Bureaucrat::demote(void)
{
	checkGrade(this->_grade + 1);
	std::cout << "demote " << this->getName() << std::endl;
	++this->_grade;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat &outBureaucrat)
{
	o << outBureaucrat.getName() << " is grade " << outBureaucrat.getGrade();
	return o;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

void Bureaucrat::checkGrade(int grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException) 
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &f)
{
	try {
		f.beSigned(*this);
	} catch (std::exception & e) {
		std::cout << this->_name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
		return ;
	}
		std::cout << this->_name << " signed " << f.getName() << std::endl;
}

void Bureaucrat::executeForm(Form const & form) const
{
	try {
		form.execute(*this);
	} catch (std::exception & e) {
		std::cout << this->_name << " couldn't execute form " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}