#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {

}

PlasmaRifle::~PlasmaRifle() {

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) {

	*this = copy;
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &copy) {

	_name = copy._name;
	_apcost = copy._apcost;
	_damage = copy._damage;
	return *this;
}

void 	PlasmaRifle::attack() const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}