#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
}

Zombie::~Zombie() {
}

void	Zombie::announce() const{
	std::cout << this->_name << "(" << this->_type << ")> I'm alive! Wait..." << std::endl;
}
