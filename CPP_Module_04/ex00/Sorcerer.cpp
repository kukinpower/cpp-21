#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {

}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {

	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {

	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy) {

	this->operator=(copy);
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &copy) {

	_name = copy._name;
	_title = copy._title;
	return *this;
}

void	Sorcerer::polymorph(Victim const &obj) const {

	obj.getPolymorphed();
}

std::string	Sorcerer::getName() const {

	return this->_name;
}

std::string	Sorcerer::getTitle() const {

	return this->_title;
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &obj) {

	out << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}
