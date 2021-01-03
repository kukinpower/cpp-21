#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

public:
	Character(std::string const &name = "[charachter]");
	Character(const Character &copy);
	virtual ~Character();
	Character &operator=(const Character &copy);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	std::string const &getName() const;

	AWeapon		*getWeapon() const;
	int 	getAp() const;

private:
	std::string _name;
	int 		_ap;
	AWeapon		*_weapon;

};

std::ostream &operator<<(std::ostream &out, const Character &obj);

#endif


//You will also implement an overload of the << to ostream operator to display the
//		attributes of your Character . Add every necessary getter function.
//This overload will display:
