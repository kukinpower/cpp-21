#ifndef INTERN_CLASS_HPP
#define INTERN_CLASS_HPP
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern();
	virtual ~Intern();

	AForm	*makeForm(const std::string &name, const std::string &target) const;

private:
	Intern(const Intern &copy);
	Intern &operator=(const Intern &copy);

	AForm	*makeShrubbery(const std::string &target) const;
	AForm	*makeRobo(const std::string &target) const;
	AForm	*makePresidential(const std::string &target) const;
};

#endif
