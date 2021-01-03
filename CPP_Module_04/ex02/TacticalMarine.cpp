#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {

	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {


	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy) {

}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &copy) {

	return *this;
}

ISpaceMarine	*TacticalMarine::clone() const {

	ISpaceMarine	*copy;

	copy = new TacticalMarine(*this);
	return copy;
}

void TacticalMarine::battleCry() const {

	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {

	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {

	std::cout << "* attacks with a chainsword *" << std::endl;
}
