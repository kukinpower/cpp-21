#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
#define SHRUBBERYCREATIONFORM_CLASS_HPP
#include <iostream>
#include <fstream>
#include "AForm.hpp"

#define POSTFIX_FILENAME "_shrubbery"

class ShrubberyCreationForm : public AForm {

public:
	ShrubberyCreationForm(const std::string &target);

	virtual ~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;

private:
	ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);

	void	performAction() const;

};

#endif
