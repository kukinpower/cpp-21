#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name){

	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim() {

}

Victim::~Victim() {

	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy) {

	*this = copy;
}

Victim	&Victim::operator=(const Victim &copy) {

	_name = copy.getName();
	return *this;
}

void Victim::getPolymorphed() const {

	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

std::string	Victim::getName() const {

	return this->_name;
}

std::ostream &operator<<(std::ostream &out, const Victim &obj) {

	out << "I am " << obj.getName() << ", and I like otters!" << std::endl;
	return out;
}
