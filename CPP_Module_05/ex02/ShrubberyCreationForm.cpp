#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubberry", 145, 137, "no target") {

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubberry", 145, 137, target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("Shrubberry", 145, 137, copy.getTarget()) {

	*this = copy;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {

	(void)copy;
	return *this;
}

void	ShrubberyCreationForm::performAction() const {

	std::ofstream file(this->getTarget() + POSTFIX_FILENAME);

	if (file.is_open()) {
		file << "               ,@@@@@@@," << std::endl;
		file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		file << "       |o|        | |         | |" << std::endl;
		file << "       |.|        | |         | |" << std::endl;
		file << "_._ \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		file.close();
	} else {
		std::cout << "Failed to open file." << std::endl;
	}
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	AForm::execute(executor);
	performAction();
}
