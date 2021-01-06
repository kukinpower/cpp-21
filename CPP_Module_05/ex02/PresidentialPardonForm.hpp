#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
#define PRESIDENTIALPARDONFORM_CLASS_HPP
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm(const std::string &target);

	virtual ~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;

private:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);

};

#endif
