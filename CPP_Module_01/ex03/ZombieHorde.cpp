#include <iostream>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _count(N){
	if (this->_count > 0) {
		this->_horde = new Zombie[this->_count];
		for (int i = 0; i < this->_count; i++) {
			_horde[i].setType("horde");
			_horde[i].setName(_horde[i].generateName());
		}
	} else {
		std::cerr << "Bad count of zombies" << std::endl;
		exit(1);
	}
	
}

ZombieHorde::~ZombieHorde() {
	if (this->_horde)
		delete[] this->_horde;
}

void	ZombieHorde::announce() const{
	for (int i = 0; i < this->_count; i++) {
		this->_horde[i].announce();
	}
}

