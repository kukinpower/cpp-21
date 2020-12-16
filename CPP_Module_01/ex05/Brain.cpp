#include "Brain.hpp"

Brain::Brain() {

}

Brain::~Brain() {

}

std::string	Brain::identify() const{

	std::stringstream 	address;
	size_t 				numAddress;
	std::stringstream 	address2;

	address << this;
	address >> std::hex >> numAddress;
	address2 << std::hex << std::uppercase << numAddress;

	std::string 		str = address2.str();

	return str;
}
