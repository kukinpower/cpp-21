#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent eve;
	srand(time(0));
    eve.randomChump();
	eve.setZombieType("another type");

	Zombie		*someZombie = eve.newZombie("Peter");
	someZombie->announce();

	eve.setZombieType("and one more type");
	eve.randomChump();

	Zombie	zomb("Lake", "stack zombie");
	zomb.announce();

	delete someZombie;
    return 0;
}
