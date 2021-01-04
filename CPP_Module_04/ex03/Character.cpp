#include "Character.hpp"

Character::Character(std::string name) : _name(name) {

	for (int i = 0; i < CAPACITY; i++) {
		_inventory[i] = nullptr;
	}
}

Character::~Character() {

	for (int i = 0; i < CAPACITY; i++) {
		if (_inventory[i] != nullptr)
			delete _inventory[i];
	}
}

Character::Character(const Character &copy) {

	*this = copy;
}

Character	&Character::operator=(const Character &copy) {

	for (int i = 0; i < CAPACITY; i++) {
		if (_inventory[i] != nullptr)
			delete _inventory[i];
		_inventory[i] = copy._inventory[i]->clone();
	}

	return *this;
}

std::string	const & Character::getName() const {

	return _name;
}

bool Character::isEquipped(AMateria *m) {

	for (int i = 0; i < CAPACITY; i++) {
		if (_inventory[i] == m)
			return true;
	}
	return false;
}

void Character::equip(AMateria* m) {

	if (m == nullptr || isEquipped(m)) {
		return ;
	}

	for (int i = 0; i < CAPACITY; i++) {
		if (_inventory[i] == nullptr) {
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx) {

	if (idx >= 0 && idx < CAPACITY) {
		_inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target) {

	if (idx >= 0 && idx < CAPACITY && _inventory[idx] != nullptr) {
		_inventory[idx]->use(target);
	}
}
