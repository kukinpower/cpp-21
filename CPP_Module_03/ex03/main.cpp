#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

void 	testNinjatrap() {
	NinjaTrap	ninja("Rafael");

	ClapTrap	claptrap("clappy");
	ScavTrap	scavtrap("scav trap");
	FragTrap	fragtrap("frag trap");
	NinjaTrap	ninjatrap("ninja trap");

	std::cout << std::endl;
	std::cout << std::endl;

	ninja.ninjaShoebox(claptrap);
	ninja.ninjaShoebox(scavtrap);
	ninja.ninjaShoebox(fragtrap);
	ninja.ninjaShoebox(ninjatrap);

}

void 	testClaptrap() {
	ClapTrap	robo;
	ClapTrap	claptrap("clappy");
	ClapTrap	clone(claptrap);

	clone.takeDamage(0);
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

}

void 	testScavtrap() {
	ScavTrap	robo;
	ScavTrap	claptrap("scav trap");
	ScavTrap	clone(claptrap);

	clone.takeDamage(0);
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

void 	checkConstDest() {
	ClapTrap a;
	std::cout << std::endl;
	ClapTrap b("Robo");
	std::cout << std::endl;

	ScavTrap c;
	std::cout << std::endl;
	ScavTrap d("Nessy");
	std::cout << std::endl;

	FragTrap e;
	std::cout << std::endl;
	FragTrap f("Super");
	std::cout << std::endl;
}

int		main(void) {

	srand(time(0));

//	std::cout << std::endl << WITH_BG << "CHECK Constructors and Destructors" << RESET << std::endl << std::endl;
//	checkConstDest();
//
//	std::cout << std::endl << WITH_BG << "CHECK CL4P" << RESET << std::endl << std::endl;
//	testClaptrap();
//
//	std::cout << WITH_BG << "CHECK TR4P" << RESET << std::endl << std::endl;
//	testFragTrap();
//
//	std::cout << std::endl << WITH_BG << "CHECK SC4V" << RESET << std::endl << std::endl;
//	testScavtrap();

	std::cout << std::endl << WITH_BG << "CHECK NINJA" << RESET << std::endl << std::endl;
	testNinjatrap();

	return 0;
}
