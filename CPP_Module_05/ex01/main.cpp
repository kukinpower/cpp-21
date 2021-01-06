#include "Bureaucrat.hpp"
#include "Form.hpp"

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
