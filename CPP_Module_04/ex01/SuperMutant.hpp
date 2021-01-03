#ifndef SUPERMUTANT_CLASS_HPP
#define SUPERMUTANT_CLASS_HPP
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant();
	SuperMutant(const SuperMutant &copy);
	virtual ~SuperMutant();
	SuperMutant &operator=(const SuperMutant &copy);

	void	takeDamage(int damage);

private:

};

#endif
