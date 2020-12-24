#include "FragTrap.hpp"

int		main(void) {

	srand(time(0));
	FragTrap	robo;
	FragTrap	claptrap("claptrap");
	FragTrap	clone(claptrap);

	clone.takeDamage(0);
	clone.takeDamage(-1);
	clone.takeDamage(90);
	clone.takeDamage(200);
	clone.takeDamage(1);
	clone.rangedAttack("Badass");
	clone.meleeAttack("Badass");

	clone = claptrap;
	clone.rangedAttack("Badass");
	clone.meleeAttack("Badass");

	claptrap.rangedAttack("Badass");
	claptrap.meleeAttack("Badass");

	claptrap.beRepaired(20);
	claptrap.takeDamage(90);
	claptrap.beRepaired(20);
	claptrap.beRepaired(100);
	claptrap.beRepaired(100);

	claptrap.vaulthunter_dot_exe("Badass");
	claptrap.vaulthunter_dot_exe("Badass");
	claptrap.vaulthunter_dot_exe("Badass");
	claptrap.vaulthunter_dot_exe("Badass");
	claptrap.vaulthunter_dot_exe("Badass");


	return 0;
}
