#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void 	ensureFormExec(const ShrubberyCreationForm &a, const Bureaucrat &b) {
	try {
		a.execute(b);
	} catch (std::exception &ex) {
		std::cout << "Exception thrown: " << ex.what() << std::endl;
	}
}

void 	ensureFormExec(const RobotomyRequestForm &a, const Bureaucrat &b) {
	try {
		a.execute(b);
	} catch (std::exception &ex) {
		std::cout << "Exception thrown: " << ex.what() << std::endl;
	}
}

void 	ensureFormExec(const PresidentialPardonForm &a, const Bureaucrat &b) {
	try {
		a.execute(b);
	} catch (std::exception &ex) {
		std::cout << "Exception thrown: " << ex.what() << std::endl;
	}
}


int		main(void) {
	srand(time(0));

	ShrubberyCreationForm shrubbery("../home");
	RobotomyRequestForm	robotomy("Badass");
	Bureaucrat b("Bob", 135);


	std::cout << "------ Testing ShrubberyCreationForm ------" << std::endl;

	ensureFormExec(shrubbery, b);
	b.signForm(shrubbery);
	ensureFormExec(shrubbery, b);

	std::cout << std::endl << "------ Testing RobotomyRequestForm ------" << std::endl;
	ensureFormExec(robotomy, b);
	Bureaucrat bb("Bob2", 1);
	bb.signForm(robotomy);
	ensureFormExec(robotomy, bb);
	ensureFormExec(robotomy, bb);
	ensureFormExec(robotomy, bb);
	ensureFormExec(robotomy, bb);
	ensureFormExec(robotomy, bb);

	std::cout << std::endl << "------ Testing PresidentialPardonForm ------" << std::endl;
	PresidentialPardonForm presidential("~target~");
	bb.signForm(presidential);
	ensureFormExec(presidential, bb);

	std::cout << std::endl << "------ Testing Bureaucrat executeForm ------" << std::endl;
	bb.executeForm(presidential);
	b.executeForm(presidential);

	return 0;
}
