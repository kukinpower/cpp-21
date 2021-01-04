#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

}

Ice::~Ice() {

}

Ice::Ice(const Ice &copy) {

	*this = copy;
}

Ice	&Ice::operator=(const Ice &copy) {

	return *this;
}

AMateria* Ice::clone() const {

	AMateria	*ice;
	ice = new Ice;
	return ice;
}

void Ice::use(ICharacter& target) {

	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
