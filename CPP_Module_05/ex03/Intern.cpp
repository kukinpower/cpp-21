#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(const Intern &copy) {

	*this = copy;
}

Intern	&Intern::operator=(const Intern &copy) {

	(void)copy;
	return *this;
}

typedef		AForm *(Intern::*InternFnPtr)(std::string const& target) const;

AForm	*Intern::makeShrubbery(const std::string &target) const {

	AForm *form = new ShrubberyCreationForm(target);
	return form;
}

AForm	*Intern::makeRobo(const std::string &target) const {

	AForm *form = new RobotomyRequestForm(target);
	return form;
}

AForm	*Intern::makePresidential(const std::string &target) const {

	AForm *form = new PresidentialPardonForm(target);
	return form;
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target) const {

	InternFnPtr			functions[] = {&Intern::makeShrubbery, &Intern::makeRobo, &Intern::makePresidential};
	std::string actions[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++) {
		if (name == actions[i]) {
			std::cout << "Intern creates " << actions[i] << " form" << std::endl;
			return (this->*functions[i])(target);
		}
	}
	std::cout << "Intern can't create such form. Try valid form name: shrubbery creation, robotomy request, presidential pardon." << std::endl
				<< "nullptr returned" << std::endl;
	return nullptr;
}
