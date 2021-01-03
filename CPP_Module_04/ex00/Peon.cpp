#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name){

	std::cout << "Zog zog." << std::endl;
}

Peon::Peon() : Victim() {

}

Peon::~Peon() {

	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy) {

}

Peon	&Peon::operator=(const Peon &copy) {

	return *this;
}

void Peon::getPolymorphed() const {

	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
