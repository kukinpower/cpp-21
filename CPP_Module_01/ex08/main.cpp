#include "Human.hpp"

int		main(void) {
	Human	soldier;

	soldier.action("meleeAttack", "Zombie");
	soldier.action("rangedAttack", "Zombie");
	soldier.action("intimidatingShout", "Zombie");
	soldier.action("dance", "Zombie");
	return 0;
}
