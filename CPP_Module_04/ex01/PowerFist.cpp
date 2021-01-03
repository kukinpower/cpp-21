#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {

}

PowerFist::~PowerFist() {

}

PowerFist::PowerFist(const PowerFist &copy) {

	*this = copy;
}

PowerFist	&PowerFist::operator=(const PowerFist &copy) {

	_name = copy._name;
	_apcost = copy._apcost;
	_damage = copy._damage;
	return *this;
}

void 	PowerFist::attack() const {

	std::cout << "* pschhh... SBAM! *" << std::endl;
}
