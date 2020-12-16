#include "Cat.hpp"

Cat::Cat() {

}

Cat::~Cat() {

}

void Cat::readFromStdin() const{

	char	c;

	while (true) {
		std::cin.get(c);
		if (std::cin.eof()) {
			return ;
		}
		std::cout << c;
	}
}
