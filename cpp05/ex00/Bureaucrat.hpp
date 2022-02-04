#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(const Bureaucrat& newBureaucrat);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& newBureaucrat);
	const std::string getName() const;
	const int getGrade() const;
};

Bureaucrat::Bureaucrat(void): _name(), _grade(150)
{
	std::cout << "Default Constructor for Bureaucrat called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& newBureaucrat)
{
	std::cout << "Copy Constructor for Bureaucrat called" << std::endl;
	*this = newBureaucrat;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name), _grade(grade)
{
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

# endif //__BUREAUCRAT_HPP__