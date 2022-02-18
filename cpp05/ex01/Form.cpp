#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _name("__noNameForm__"), _signRequiredGrade(150), _execRequiredGrade(150), _signed(false)
{
	std::cout << "Default Constructor for Form called" << std::endl;
	return ;
}

Form::Form(const std::string name, int signRequiredGrade, int execRequiredGrade) throw(Form::GradeTooHighException, Form::GradeTooLowException):
	_name(name), _signRequiredGrade(150), _execRequiredGrade(150)
{
	std::cout << "Arguments Constructor for Form called" << std::endl;
	checkGrade(signRequiredGrade);
	*(int *)(&this->_signRequiredGrade) = signRequiredGrade;
	checkGrade(execRequiredGrade);
	*(int *)(&this->_execRequiredGrade) = execRequiredGrade;
}
Form::Form(const Form& newForm): _name(newForm._name), _signRequiredGrade(newForm._signRequiredGrade), _execRequiredGrade(newForm._execRequiredGrade), _signed(newForm._signed)
{
	std::cout << "Copy Constructor for Form called" << std::endl;
	return ;
}

Form::~Form(void)
{
	std::cout << "Default Destructor for Form called" << std::endl;
	return ;
}

Form& Form::operator=(const Form& newForm)
{
	std::cout << "Form Assignement Operator called" << std::endl;
	checkGrade(newForm._signRequiredGrade);
	*(int *)(&this->_signRequiredGrade) = newForm._signRequiredGrade;
	checkGrade(newForm._execRequiredGrade);
	*(int *)(&this->_execRequiredGrade) = newForm._execRequiredGrade;
	this->_signed = newForm._signed;
	*(std::string *)(&this->_name) = newForm._name;
	return *this;
}

std::ostream& operator<<(std::ostream& o, Form &outForm)
{
	o << "Form " << outForm.getName() << " requires grade " << outForm.getSignRequiredGrade() << " to be signed and grade " <<
		outForm.getExecRequiredGrade() << " to be executed, form " << (outForm.isSigned() ? "is signed" : "isn't signed");
	return o;
}

const std::string Form::getName(void) const
{
	return this->_name;
}

int Form::getSignRequiredGrade() const
{
	return this->_signRequiredGrade;
}

int Form::getExecRequiredGrade() const
{
	return this->_execRequiredGrade;
}

void Form::setName(const std::string newName)
{
	*(std::string *)(&this->_name) = newName;
}

void Form::setSignRequiredGrade(const int newSignRequiredGrade)
{
	*(int *)(&this->_signRequiredGrade) = newSignRequiredGrade;
}

void Form::setExecRequiredGrade(const int newExecRequiredGrade)
{
	*(int *)(&this->_execRequiredGrade) = newExecRequiredGrade;
}

void Form::setSigned(bool setting)
{
	this->_signed = setting;
}

void Form::checkGrade(int grade) const throw(Form::GradeTooHighException, Form::GradeTooLowException)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

const char *Form::FormNotSignedException::what(void) const throw()
{
	return ("Form not signed");
}

void Form::beSigned(Bureaucrat &b) throw(Form::GradeTooLowException)
{
	if (this->_signed)
	{
		std::cout << "Form " << this->_name << " is already signed" << std::endl;
		return ;
	}
	if (b.getGrade() > this->_signRequiredGrade)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

bool Form::isSigned(void) const
{
	return this->_signed;
}