#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {

	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {

	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy) {

}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &copy) {

	return *this;
}

ISpaceMarine	*AssaultTerminator::clone() const {

	ISpaceMarine	*copy;

	copy = new AssaultTerminator(*this);
	return copy;
}

void AssaultTerminator::battleCry() const {

	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {

	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {

	std::cout << "* attacks with chainfists *" << std::endl;
}
