#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:
	HumanB(std::string name = "name");
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);

private:
	std::string		_name;
	Weapon			*_weapon;

};

#endif
