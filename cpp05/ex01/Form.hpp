#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const int _signRequiredGrade;
	const int _execRequiredGrade;
	bool _signed;
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
	
	Form();
	Form(const std::string name, int signRequiredGrade, int execRequiredGrade);
	Form(const Form& newForm);
	~Form();

	Form& operator=(const Form &newForm);

	const std::string getName();
	void checkGrade(int grade);
	void beSigned(Bureaucrat &b);
	int getSignGrade();
	int getExecGrade();
	bool isSigned();
};

std::ostream& operator<<(std::ostream& o, Form &outForm);

#endif // __FORM_HPP__