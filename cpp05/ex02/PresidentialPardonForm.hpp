#ifndef __PRESIDENTIALCREATIONFORM_HPP__
# define __PRESIDENTIALCREATIONFORM_HPP__

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& newPresidentialPardonForm);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm& newPresidentialPardonForm);

	virtual void makeFormAction() const;
};

# endif // __PRESIDENTIALCREATIONFORM_HPP__