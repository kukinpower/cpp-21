#include "Badass.hpp"

Badass::Badass(std::string name) : Victim(name){

	std::cout << "Zog zog." << std::endl;
}

Badass::Badass() : Victim() {

}

Badass::~Badass() {

	std::cout << "Bleuark..." << std::endl;
}

Badass::Badass(const Badass &copy) : Victim(copy) {

	*this = copy;
}

Badass	&Badass::operator=(const Badass &copy) {

	_name = copy.getName();
	return *this;
}

void Badass::getPolymorphed() const {

	std::cout << this->getName() << " has been turned into a pretty butterfly!" << std::endl;
}
