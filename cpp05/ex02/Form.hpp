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
	Form(const std::string name, int signRequiredGrade, int execRequiredGrade);
	Form(const Form& newForm);
	~Form();

	Form& operator=(const Form &newForm);

	const std::string getName() const;
	int getSignRequiredGrade() const;
	int getExecRequiredGrade() const;

	void checkGrade(int grade) const;
	void beSigned(Bureaucrat &b);
	int getSignGrade() const;
	int getExecGrade() const;
	bool isSigned() const;
	void execute(Bureaucrat const & executor) const;
	virtual void makeFormAction() const = 0;
};

std::ostream& operator<<(std::ostream& o, Form &outForm);

#endif // __FORM_HPP__