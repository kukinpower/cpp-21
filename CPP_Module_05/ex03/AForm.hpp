#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP
#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

#define DELIM "----------------------------------------"

class Bureaucrat;

class AForm {

public:
	AForm(const std::string &name, const int &signRequiredGrade, \
									const int &execRequiredGrade);
	AForm(const AForm &copy);
	virtual ~AForm();

	const std::string	&getName() const;
	bool				getIsSigned() const;
	const int			&getSignedRequirredGrade() const;
	const int			&getExecRequiredGrade() const;
	const std::string	&getTarget() const;

	void 				beSigned(const Bureaucrat &obj);

	void execute(Bureaucrat const & executor) const;
	virtual void performAction() const = 0;

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

	class FormNotSignedException : public std::exception {

	public:
		virtual const char	*what() const throw() {
			return "The form is not signed";
		}
	};

private:
	AForm();
	AForm &operator=(const AForm &copy);

	const std::string	_name;
	bool 				_isSigned;
	const int 			_signRequiredGrade;
	const int 			_execRequiredGrade;
	const std::string	_target;

	void	ensureGrade(const int &grade) const;

protected:
	AForm(const std::string &name, const int &signRequiredGrade, \
			const int &execRequiredGrade, const std::string &target);

};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
