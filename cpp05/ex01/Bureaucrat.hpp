#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <exception>
# include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	Bureaucrat();
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(const Bureaucrat& newBureaucrat);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& newBureaucrat);
	const std::string getName() const;
	int getGrade() const;
	void promote();
	void demote();
	void checkGrade(int grade);
	void signForm(Form &f);
};

std::ostream& operator<<(std::ostream& o, Bureaucrat &outBureaucrat);

# endif //__BUREAUCRAT_HPP__