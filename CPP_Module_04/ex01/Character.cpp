#include "Character.hpp"

Character::Character(std::string const &name)\
					: _name(name), _ap(40), _weapon(nullptr) {

}

Character::~Character() {

}

Character::Character(const Character &copy) {

	*this = copy;
}

Character	&Character::operator=(const Character &copy) {

	_name = copy._name;
	_ap = copy._ap;
	_weapon = copy._weapon;
	return *this;
}

void Character::recoverAP() {

	if (_ap >= 40)
		return ;
	else if (_ap + 10 > 40)
		_ap = 40;
	else
		_ap += 10;
}

void Character::equip(AWeapon *weapon) {

	_weapon = weapon;
}

std::string const &Character::getName() const {

	return _name;
}

void Character::attack(Enemy *enemy) {

	if (_weapon == nullptr || enemy == nullptr)
		return ;

	// check if enemy already has 0 or less hp
	if (enemy->getHP() <= 0) {
		delete enemy;
		return ;
	}
	// check if enough ap
	if (_ap < _weapon->getAPCost()) {
		std::cout << "Not enough ap to perform attack. Current AP: " << _ap << std::endl;
		return ;
	}
	_ap -= _weapon->getAPCost();

	// perform attack
	enemy->takeDamage(_weapon->getDamage());
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();

	// if enemies hp is already 0 delete it
	if (enemy->getHP() <= 0) {
		delete enemy;
		return ;
	}
}

int 		Character::getAp() const {

	return _ap;
}

AWeapon		*Character::getWeapon() const {

	return _weapon;
}

std::ostream &operator<<(std::ostream &out, const Character &obj) {

	out << obj.getName() << " has " << obj.getAp();
	if (obj.getWeapon() == nullptr)
		out << " and is unarmed" << std::endl;
	else
		out << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
	return out;
}
