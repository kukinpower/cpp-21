#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
#define ROBOTOMYREQUESTFORM_CLASS_HPP
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm(const std::string &target);

	virtual ~RobotomyRequestForm();

private:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

	void performAction() const;

};

#endif
