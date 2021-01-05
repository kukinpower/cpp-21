#include "Bureaucrat.hpp"

int		main(void) {

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
	return 0;
}
