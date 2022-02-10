#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <exception>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	class GradeTooHighException: public std::exception
	{
		public:
			GradeTooHighException();
			~GradeTooHighException();
			virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			GradeTooLowException();
			~GradeTooLowException();
			virtual const char *what() const throw();
	};

	Bureaucrat();
	Bureaucrat(const std::string name, const int grade) throw();
	Bureaucrat(const Bureaucrat& newBureaucrat) throw();
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& newBureaucrat) throw();
	const std::string getName() const;
	const int getGrade() const;
	void promote() throw();
	void demote() throw();
};

std::ostream& operator<<(std::ostream& o, Bureaucrat &outBureaucrat);

# endif //__BUREAUCRAT_HPP__