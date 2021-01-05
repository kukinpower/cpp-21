#include "Form.hpp"
#include <iomanip>

Form::Form() : _name("default form"), _isSigned(false), _signRequiredGrade(150), _execRequiredGrade(150) {

}

Form::Form(const std::string &name, const int &signRequiredGrade, const int &execRequiredGrade)\
			: _name(name), _isSigned(false), _signRequiredGrade(signRequiredGrade), _execRequiredGrade(execRequiredGrade) {

	ensureGrade(signRequiredGrade);
	ensureGrade(execRequiredGrade);
}

Form::~Form() {

}

void 	Form::ensureGrade(const int &grade) const {

	if (grade > LOWEST_GRADE) {
		throw Form::GradeTooLowException();
	} else if (grade < HIGHEST_GRADE) {
		throw Form::GradeTooHighException();
	}
}

Form::Form(const Form &copy) : _name(copy.getName()), _isSigned(copy.getIsSigned()),\
	_signRequiredGrade(copy.getSignedRequirredGrade()), _execRequiredGrade(copy.getExecRequiredGrade()) {

}

const std::string	&Form::getName() const {

	return _name;
}

bool	Form::getIsSigned() const {

	return _isSigned;
}

const int	&Form::getSignedRequirredGrade() const {

	return _signRequiredGrade;
}

const int	&Form::getExecRequiredGrade() const {

	return _execRequiredGrade;
}

void 		Form::beSigned(const Bureaucrat &obj) {

	if (obj.getGrade() <= _signRequiredGrade) {
		_isSigned = true;
	} else {
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &out, const Form &obj) {

	std::string isSigned = obj.getIsSigned() ? "signed" : "not signed";
	out << DELIM << std::endl // 40
		<< "| Form:" << std::setw(31) << obj.getName() << " |"<< std::endl;
	out	<< "| Status:" << std::setw(29) << isSigned << " |" << std::endl;
	out << "| Sign grade required:" << std::setw(16) << obj.getSignedRequirredGrade() << " |" << std::endl;
	out << "| Exec grade required:" << std::setw(16) << obj.getExecRequiredGrade() << " |" << std::endl;
	out << DELIM << std::endl;
	return out;
}


