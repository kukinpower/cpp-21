#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {

	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy)\
							: Enemy(170, "Super Mutant") {

	*this = copy;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &copy) {

	Enemy::operator=(copy);
	return *this;
}

void SuperMutant::takeDamage(int damage) {

	if (damage > 3)
		damage -= 3;
	Enemy::takeDamage(damage);
}
