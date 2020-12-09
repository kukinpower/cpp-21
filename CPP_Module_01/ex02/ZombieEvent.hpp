#ifndef ZOMBIE_EVENT_CLASS_HPP
# define ZOMBIE_EVENT_CLASS_HPP
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type) ;
	Zombie* newZombie(std::string name);

private:
	std::string	_type;
};

#endif