#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include <iostream>
# include "Form.hpp"

class Intern
{
private:
	Form *makeShrubberyForm(std::string target);
	Form *makeRobotomyForm(std::string target);
	Form *makePresidentialForm(std::string target);

public:
	class InvalidFormException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	Intern();
	Intern(const Intern& newIntern);
	~Intern();

	Intern& operator=(const Intern& newIntern);
	Form *makeForm(std::string formName, std::string target);
};

# endif // __INTERN_HPP__