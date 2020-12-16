#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {

	std::cout << "Human attacks " << target << " in the melee" << std::endl;
}

void Human::rangedAttack(std::string const & target) {

	std::cout << "Human attacks " << target << " from a distance" << std::endl;
}

void Human::intimidatingShout(std::string const & target) {

	std::cout << "Human intimidating shouts on " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {

	std::string 	actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	if (action_name == "meleeAttack") {
		this->meleeAttack(target);
	} else if (action_name == "rangedAttack") {
		this->rangedAttack(target);
	} else if (action_name == "intimidatingShout") {
		this->intimidatingShout(target);
	} else {
		std::cout << "Human can't do this" << std::endl;
	}
}
