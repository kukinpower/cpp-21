#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
}

Zombie::~Zombie() {
}

void	Zombie::announce() const{
	std::cout << "<" << this->_name << " (" << this->_type << ")> I'm alive! Wait..." << std::endl;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}


std::string	Zombie::generateName() {
	std::string	nameArray[8] = {"Wellington", "Amsterdam", "Monaco", "Moscow", "London", "New-York", "Berlin", "Paris"};
	return (nameArray[rand() % 8]);
}