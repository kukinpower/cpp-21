#include "Badass.hpp"

Badass::Badass() : Enemy(80, "Badass") {

	std::cout << "* He-he-he! *" << std::endl;
}

Badass::~Badass() {

	std::cout << "* OH NOOOOO... *" << std::endl;
}

Badass::Badass(const Badass &copy) : Enemy(80, "Badass") {

	*this = copy;
}

Badass	&Badass::operator=(const Badass &copy) {

	Enemy::operator=(copy);
	return *this;
}

void Badass::takeDamage(int damage) {

	Enemy::takeDamage(damage);
}
