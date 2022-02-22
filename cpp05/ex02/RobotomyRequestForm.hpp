#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& newRobotomyRequestForm);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm& newRobotomyRequestForm);

	virtual void makeFormAction() const;
};

# endif // __ROBOTOMYREQUESTFORM_HPP__