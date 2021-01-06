#include "AForm.hpp"
#include <iomanip>

AForm::AForm() : _name("default form"), _isSigned(false), _signRequiredGrade(150), _execRequiredGrade(150), _target("no target") {

}

AForm::AForm(const std::string &name, const int &signRequiredGrade, const int &execRequiredGrade)\
			: _name(name), _isSigned(false), _signRequiredGrade(signRequiredGrade), _execRequiredGrade(execRequiredGrade), _target("no target") {

	ensureGrade(signRequiredGrade);
	ensureGrade(execRequiredGrade);
}

AForm::AForm(const std::string &name, const int &signRequiredGrade, const int &execRequiredGrade, const std::string &target)\
			: _name(name), _isSigned(false), _signRequiredGrade(signRequiredGrade), _execRequiredGrade(execRequiredGrade), _target(target) {

	ensureGrade(signRequiredGrade);
	ensureGrade(execRequiredGrade);
}

AForm::~AForm() {

}

void 	AForm::ensureGrade(const int &grade) const {

	if (grade > LOWEST_GRADE) {
		throw AForm::GradeTooLowException();
	} else if (grade < HIGHEST_GRADE) {
		throw AForm::GradeTooHighException();
	}
}

AForm::AForm(const AForm &copy) : _name(copy.getName()), _isSigned(copy.getIsSigned()),\
	_signRequiredGrade(copy.getSignedRequirredGrade()), _execRequiredGrade(copy.getExecRequiredGrade()) {

}

const std::string	&AForm::getName() const {

	return _name;
}

const std::string	&AForm::getTarget() const {

	return _target;
}

bool	AForm::getIsSigned() const {

	return _isSigned;
}

const int	&AForm::getSignedRequirredGrade() const {

	return _signRequiredGrade;
}

const int	&AForm::getExecRequiredGrade() const {

	return _execRequiredGrade;
}

void 		AForm::beSigned(const Bureaucrat &obj) {

	if (obj.getGrade() <= _signRequiredGrade) {
		_isSigned = true;
	} else {
		throw AForm::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &out, const AForm &obj) {

	std::string isSigned = obj.getIsSigned() ? "signed" : "not signed";
	out << DELIM << std::endl // 40
		<< "| Form:" << std::setw(31) << obj.getName() << " |"<< std::endl;
	out	<< "| Status:" << std::setw(29) << isSigned << " |" << std::endl;
	out << "| Sign grade required:" << std::setw(16) << obj.getSignedRequirredGrade() << " |" << std::endl;
	out << "| Exec grade required:" << std::setw(16) << obj.getExecRequiredGrade() << " |" << std::endl;
	out << DELIM << std::endl;
	return out;
}

void AForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() > this->_execRequiredGrade) {
		throw AForm::GradeTooLowException();
	} else if (this->_isSigned == false) {
		throw AForm::FormNotSignedException();
	}
}
