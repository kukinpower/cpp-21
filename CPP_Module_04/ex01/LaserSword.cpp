#include "LaserSword.hpp"

LaserSword::LaserSword() : AWeapon("Laser Sword", 7, 45) {

}

LaserSword::~LaserSword() {

}

LaserSword::LaserSword(const LaserSword &copy) {

	*this = copy;
}

LaserSword	&LaserSword::operator=(const LaserSword &copy) {

	_name = copy._name;
	_apcost = copy._apcost;
	_damage = copy._damage;
	return *this;
}

void 	LaserSword::attack() const {

	std::cout << "* whoosh *" << std::endl;
}
