#ifndef ZOMBIEHORDE_CLASS_HPP
# define ZOMBIEHORDE_CLASS_HPP
#include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int N);
	~ZombieHorde();

	void	announce() const;

private:
	int		_count;
	Zombie	*_horde;
};

#endif