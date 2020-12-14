#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	srand(time(0));
    ZombieHorde horde(8);
    horde.announce();
	
    return 0;
}
