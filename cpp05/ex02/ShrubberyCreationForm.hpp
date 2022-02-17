#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& newShrubberyCreationForm);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& newShrubberyCreationForm);

	virtual void makeFormAction() const;
};

# endif // __SHRUBBERYCREATIONFORM_HPP__