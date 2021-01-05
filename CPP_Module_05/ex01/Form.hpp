#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP
#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

#define DELIM "----------------------------------------"

class Bureaucrat;

class Form {

public:
	Form(const std::string &name, const int &signRequiredGrade, const int &execRequiredGrade);
	Form(const Form &copy);
	virtual ~Form();

	const std::string	&getName() const;
	bool				getIsSigned() const;
	const int			&getSignedRequirredGrade() const;
	const int			&getExecRequiredGrade() const;

	void 				beSigned(const Bureaucrat &obj);

	class GradeTooHighException : public std::exception {

	public:
		virtual const char	*what() const throw() {
			return "Grade is too high";
		}
	};

	class GradeTooLowException : public std::exception {

	public:
		virtual const char	*what() const throw() {
			return "Grade is too low";
		}
	};

private:
	Form();
	Form &operator=(const Form &copy);

	const std::string	_name;
	bool 				_isSigned;
	const int 			_signRequiredGrade;
	const int 			_execRequiredGrade;

	void	ensureGrade(const int &grade) const;

};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
