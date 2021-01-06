#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5, "no target") {

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon", 25, 5, target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm("Presidential Pardon", 25, 5, copy.getTarget()) {

	*this = copy;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {

	(void)copy;
	return *this;
}

void	PresidentialPardonForm::performAction() const {

	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
