#ifndef PLASMARIFLE_CLASS_HPP
#define PLASMARIFLE_CLASS_HPP
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &copy);
	virtual ~PlasmaRifle();
	PlasmaRifle &operator=(const PlasmaRifle &copy);

	virtual void attack() const;

private:

};

#endif
