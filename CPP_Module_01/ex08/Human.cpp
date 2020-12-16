#include "Human.hpp"

typedef void (Human::*HunanFunctionPtr)(std::string const& target);

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
	HunanFunctionPtr	hfp[] = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout };
	std::string const	actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++) {
		if (action_name == actions[i]) {
			(this->*hfp[i])(target);
			return ;
		}
	}
	std::cerr << "Human can't do this" << std::endl;
}
