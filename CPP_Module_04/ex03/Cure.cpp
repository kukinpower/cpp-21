#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

}

Cure::~Cure() {

}

Cure::Cure(const Cure &copy) {

	*this = copy;
}

Cure	&Cure::operator=(const Cure &copy) {

	return *this;
}

AMateria* Cure::clone() const {

	AMateria	*cure;
	cure = new Cure;
	return cure;
}

void Cure::use(ICharacter& target) {

	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
