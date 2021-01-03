#ifndef LASERSWORD_CLASS_HPP
#define LASERSWORD_CLASS_HPP
#include <iostream>
#include "AWeapon.hpp"

class LaserSword : public AWeapon {

public:
	LaserSword();
	LaserSword(const LaserSword &copy);
	virtual ~LaserSword();
	LaserSword &operator=(const LaserSword &copy);

	virtual void attack() const;

private:

};

#endif
