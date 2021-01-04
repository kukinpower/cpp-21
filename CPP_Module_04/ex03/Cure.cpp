#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

}

Cure::~Cure() {

}

Cure::Cure(const Cure &copy) : AMateria("cure") {

	*this = copy;
}

Cure	&Cure::operator=(const Cure &copy) {

	AMateria::operator=(copy);
	return *this;
}

AMateria* Cure::clone() const {

	AMateria	*cure;
	cure = new Cure(*this);
	return cure;
}

void Cure::use(ICharacter& target) {

	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
