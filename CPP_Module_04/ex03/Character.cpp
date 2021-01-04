#include "Character.hpp"

Character::Character() {

}

Character::~Character() {

}

Character::Character(const Character &copy) {

	*this = copy;
}

Character	&Character::operator=(const Character &copy) {

	return *this;
}

std::string	const & Character::getName() const {

	return _name;
}
