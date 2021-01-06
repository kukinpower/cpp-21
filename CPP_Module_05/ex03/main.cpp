#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int		main(void) {

	Intern intern;

	AForm	*robotomy = intern.makeForm("robo", "ROBO");
	robotomy = intern.makeForm("robotomy request", "ROBO");

	AForm	*shrubbery = intern.makeForm("shrubbery creation", "home");

	AForm	*presidential = intern.makeForm("presidential pardon", "BOB");

	Bureaucrat a("Jack", 1);

	a.signForm(*presidential);
	a.executeForm(*presidential);

	delete robotomy;
	delete shrubbery;
	delete presidential;

	return 0;
}
