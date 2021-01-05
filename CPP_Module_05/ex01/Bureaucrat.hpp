#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP
#include <iostream>
#include "Form.hpp"

#define LOWEST_GRADE 150
#define HIGHEST_GRADE 1

class Form;

class Bureaucrat {

public:
	Bureaucrat(const std::string &name, const int &grade);
	Bureaucrat(const Bureaucrat &copy);
	virtual ~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &copy);

	const std::string	&getName() const;
	int 				getGrade() const;

	void 				decrementGrade();
	void 				incrementGrade();

	void 				signForm(Form &obj);

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
	Bureaucrat();
	const std::string	_name;
	int 				_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
