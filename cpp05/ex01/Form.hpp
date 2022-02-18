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

protected:
	void setName(std::string newName);
	void setSignRequiredGrade(const int newSignRequiredGrade);
	void setExecRequiredGrade(const int newExecRequiredGrade);
	void setSigned(bool setting);

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
	class FormNotSignedException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	
	Form();
	Form(const std::string name, int signRequiredGrade, int execRequiredGrade) throw(Form::GradeTooHighException, Form::GradeTooLowException);
	Form(const Form& newForm);
	virtual ~Form();

	Form& operator=(const Form &newForm);

	const std::string getName() const;
	int getSignRequiredGrade() const;
	int getExecRequiredGrade() const;
	bool isSigned() const;

	void checkGrade(int grade) const throw(Form::GradeTooHighException, Form::GradeTooLowException);
	void beSigned(Bureaucrat &b) throw(Form::GradeTooLowException);
};

std::ostream& operator<<(std::ostream& o, Form &outForm);

#endif // __FORM_HPP__