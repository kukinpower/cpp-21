#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : \
					_name(name), _apcost(apcost), _damage(damage) {
}

AWeapon::~AWeapon() {

}

AWeapon::AWeapon(const AWeapon &copy) {

	*this = copy;
}

AWeapon	&AWeapon::operator=(const AWeapon &copy) {

	_name = copy._name;
	_damage = copy._damage;
	_apcost = copy._apcost;
	return *this;
}

std::string const &AWeapon::getName() const {

	return _name;
}

int AWeapon::getAPCost() const {

	return _apcost;
}

int AWeapon::getDamage() const {

	return _damage;
}
