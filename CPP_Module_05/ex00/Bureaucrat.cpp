#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : _name(name), _grade(grade) {

	if (grade > LOWEST_GRADE) {
		throw Bureaucrat::GradeTooLowException();
	} else if (grade < HIGHEST_GRADE) {
		throw Bureaucrat::GradeTooHighException();
	}
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {

	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy) {

	_grade = copy.getGrade();
	return *this;
}

const std::string	&Bureaucrat::getName() const {

	return _name;
}

int 				Bureaucrat::getGrade() const {

	return _grade;
}

void 				Bureaucrat::decrementGrade() {

	if (_grade + 1 > LOWEST_GRADE) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		_grade++;
	}
}

void 				Bureaucrat::incrementGrade() {

	if (_grade - 1 < HIGHEST_GRADE) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		_grade--;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj) {

	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return out;
}
