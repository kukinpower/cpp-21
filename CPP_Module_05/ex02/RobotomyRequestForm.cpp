#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45, "no target") {

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy", 72, 45, target) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm("Robotomy", 72, 45, copy.getTarget()) {

	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {

	(void)copy;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	AForm::execute(executor);
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2 == 0) {
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	} else {
		std::cout << "it’s a failure" << std::endl;
	}
}
