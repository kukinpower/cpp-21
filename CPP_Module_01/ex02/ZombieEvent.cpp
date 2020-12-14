#include <iostream>
#include <stdlib.h> 
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	this->_type = "someType";
}

ZombieEvent::~ZombieEvent() {
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie	*newOne = new Zombie(name, this->_type);
	return newOne;
}

void	ZombieEvent::randomChump() {
	std::string	nameArray[8] = {"Wellington", "Amsterdam", "Monaco", "Moscow", "London", "New-York", "Berlin", "Paris"};
	Zombie	chumpZombie(nameArray[rand() % 8], this->_type);
	chumpZombie.announce();
}
