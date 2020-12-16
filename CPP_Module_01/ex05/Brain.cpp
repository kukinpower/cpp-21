#include "Brain.hpp"

Brain::Brain() {

}

Brain::~Brain() {

}

std::string	Brain::identify() const{

	std::stringstream 	address;

	address << this;

	std::string 		str = address.str();
	for (size_t i = 0; i < str.length(); i++) {
		str[i] = ::toupper(str[i]);
	}
	return str;
}
