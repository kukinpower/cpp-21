#include <iostream>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _count(N), _horde(new Zombie[this->_count]){
	for (int i = 0; i < this->_count; i++) {
		_horde[i].setType("horde");
		_horde[i].setName(_horde[i].generateName());
	}
}

ZombieHorde::~ZombieHorde() {
	delete[] this->_horde;
}

void	ZombieHorde::announce() const{
	for (int i = 0; i < this->_count; i++) {
		this->_horde[i].announce();
	}
}

