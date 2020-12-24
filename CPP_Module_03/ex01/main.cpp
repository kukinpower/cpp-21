#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void 	testScavtrap() {
	ScavTrap	robo;
	ScavTrap	claptrap("scav trap");
	ScavTrap	clone(claptrap);

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

	claptrap.challengeNewcomer();
	claptrap.challengeNewcomer();
	claptrap.challengeNewcomer();
}

void 	testFragTrap() {
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
}

int		main(void) {

	srand(time(0));

	std::cout << WITH_BG << "CHECK TR4P" << RESET << std::endl << std::endl;
	testFragTrap();

	std::cout << std::endl << WITH_BG << "CHECK SCAV" << RESET << std::endl << std::endl;
	testScavtrap();
	return 0;
}
