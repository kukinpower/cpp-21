#include "AMateria.hpp"

AMateria::AMateria() {

}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {

}

AMateria::~AMateria() {

}

AMateria::AMateria(const AMateria &copy) {

	*this = copy;
}

AMateria	&AMateria::operator=(const AMateria &copy) {

	_xp = copy._xp;
	_type = copy._type;
	return *this;
}

std::string const &AMateria::getType() const {

	return _type;
}

unsigned int AMateria::getXP() const {

	return _xp;
}

void AMateria::use(ICharacter& target) {

	(void)target;
	_xp += 10;
}
