#ifndef AWEAPON_CLASS_HPP
#define AWEAPON_CLASS_HPP
#include <iostream>

class AWeapon {

public:
	AWeapon(std::string const & name = "Bare Hands", int apcost = 5, int damage = 5);
	AWeapon(const AWeapon &copy);
	virtual ~AWeapon();
	AWeapon &operator=(const AWeapon &copy);

	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

protected:
	std::string _name;
	int			_apcost;
	int			_damage;
};

#endif
