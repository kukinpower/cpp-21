#ifndef BADASS_CLASS_HPP
#define BADASS_CLASS_HPP
#include <iostream>
#include "Enemy.hpp"

class Badass : public Enemy {

public:
	Badass();
	Badass(const Badass &copy);
	virtual ~Badass();
	Badass &operator=(const Badass &copy);

	void	takeDamage(int damage);

private:

};

#endif
