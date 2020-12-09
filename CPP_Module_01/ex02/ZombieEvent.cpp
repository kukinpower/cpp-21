#include <iostream>
// #include <cstdlib>
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
	Zombie	*newZombie = new Zombie(name, this->_type);
	return newZombie;
}

void	ZombieEvent::randomChump() {
	std::string	nameArray[8] = {"Wellington", "Amsterdam", "Monaco", "Moscow", "London", "New-York", "Berlin", "Paris"};
	Zombie	newZombie(nameArray[rand() % 8], this->_type);
	newZombie.announce();
}
