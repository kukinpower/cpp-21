#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "Badass.hpp"
#include "LaserSword.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl << "------------ Thorough testing ------------" << std::endl;
	Enemy	*badass = new Badass();
	AWeapon	*sword = new LaserSword();
	me->equip(sword);
	std::cout << *me;
	std::cout << "Badass HP: " << badass->getHP() << std::endl;
	me->attack(badass);
	std::cout << *me;
	std::cout << "Badass HP: " << badass->getHP() << std::endl;
	me->attack(badass);
	std::cout << *me;
	std::cout << "Badass HP: " << badass->getHP() << std::endl;

	std::cout << std::endl << "------------ DELETE ------------" << std::endl;
	delete me;
	delete pr;
	delete pf;
//	delete badass;
	delete sword;
	return 0;
}

/*
$> clang++ -W -Wall -Werror *.cpp
$> ./a.out | cat -e
me has 40 AP and is unarmed$
* click click click *$
me has 40 AP and wields a Plasma Rifle$
me attacks RadScorpion with a Power Fist$
* pschhh... SBAM! *$
me has 32 AP and wields a Power Fist$
me has 32 AP and wields a Plasma Rifle$
me attacks RadScorpion with a Plasma Rifle$
* piouuu piouuu piouuu *$
me has 27 AP and wields a Plasma Rifle$
me attacks RadScorpion with a Plasma Rifle$
* piouuu piouuu piouuu *$
* SPROTCH *$
me has 22 AP and wields a Plasma Rifle$
*/