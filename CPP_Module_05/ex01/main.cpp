#include "Bureaucrat.hpp"
#include "Form.hpp"

void 	testBureaucrat() {
	try {
		Bureaucrat	a("John", 151);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat	b("Jack", 0);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	Bureaucrat	a("John", 150);
	std::cout << a;
	try {
		a.incrementGrade();
		std::cout << a;
		a.decrementGrade();
		a.decrementGrade();
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	Bureaucrat	b("Jack", 1);
	try {
		b.incrementGrade();
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << a << b;
}

int		main(void) {

	Form	a("High", 3, 5);
	Form	b("Low", 150, 5);
	std::cout << a << b;

	Bureaucrat bureaucrat("Worker", 4);
	bureaucrat.signForm(a);
	bureaucrat.signForm(b);
	std::cout << a << b;

	return 0;
}
